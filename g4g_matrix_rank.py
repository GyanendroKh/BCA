import numpy as np
import sys

class rankMatrix(object): 
  def __init__(self, Matrix): 
    self.Matrix = Matrix
    self.R = len(Matrix) 
    self.C = len(Matrix[0]) 
    
  def swap(self, Matrix, row1, row2, col): 
    for i in range(col): 
      temp = Matrix[row1][i] 
      Matrix[row1][i] = Matrix[row2][i] 
      Matrix[row2][i] = temp 
      
  def Display(self, Matrix, row, col): 
    for i in range(row): 
      for j in range(col): 
        print (" " + str(Matrix[i][j]), end='') 
      print ('\n') 
      
  def rankOfMatrix(self, Matrix): 
    rank = min(self.C, self.R) 

    for row in range(0, rank): 
      
      if Matrix[row][row] != 0: 
        for col in range(0, self.R, 1): 
          if col != row: 
            
            multiplier = (Matrix[col][row] / Matrix[row][row])
            print(f'R{col + 1} = R{col + 1} - R{row + 1} * ({multiplier})')

            for i in range(rank): 
              Matrix[col][i] -= (multiplier * Matrix[row][i])
      else: 
        reduce = True
        
        for i in range(row + 1, self.R, 1): 
          if Matrix[i][row] != 0: 
            print(f'Swap {row} {i} {rank}')
            self.swap(Matrix, row, i, rank) 
            reduce = False
            break
        
        if reduce: 
          rank -= 1
          for i in range(0, self.R, 1): 
            Matrix[i][row] = Matrix[i][rank] 
            
        row -= 1
      print(np.array(Matrix), '\n')

    return (rank) 


def extract_matrix(numbers):
  matrix = [x for x in numbers.split(';')]
  matrix = [
    [int(y) for y in x.split(',')] for x in matrix
  ]

  return np.array(matrix)


if __name__ == '__main__': 
  Matrix = extract_matrix(sys.argv[1])
  RankMatrix = rankMatrix(Matrix) 

  print('Matrix:')
  print(Matrix, '\n')

  print ("Rank of the Matrix is:", (RankMatrix.rankOfMatrix(Matrix.copy())))


