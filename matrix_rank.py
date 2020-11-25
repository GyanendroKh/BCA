import numpy as np
import sys


def extract_matrix(numbers):
  matrix = [x for x in numbers.split(';')]
  matrix = [
    [int(y) for y in x.split(',')] for x in matrix
  ]

  return np.array(matrix)


class MatrixRank(object):
  def __init__(self, matrix):
    self.matrix = matrix
    (self.R, self.C) = matrix.shape
  
  def display(self):
    print(self.matrix)

  def rank(self):
    return np.linalg.matrix_rank(self.matrix)


if __name__ == "__main__":
  matrix = extract_matrix(sys.argv[1])
 
  rankMatrix = MatrixRank(matrix)
  rankMatrix.display()
  print('Rank:', rankMatrix.rank())
