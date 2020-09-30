class Vector():
  def __init__(self,x,y,z):
    self.x = x
    self.y = y
    self.z = z
  def __add__(self,other):
    return Vector(self.x + other.x, self.y + other.y,\
      self.z + other.z)
  def __sub__(self,other):
    return Vector(self.x - other.x, self.y - other.y,\
      self.z - other.z)
  def __mul__(self, s):
    return Vector(self.x*s, self.y*s, self.z*s)
  def __eq__(self,other):
    return self.x == other.x and self.y == other.y and\
      self.z == other.z
  def __str__(self):
    return str(self.x) + ' ' + str(self.y) + ' ' + str(self.z)
