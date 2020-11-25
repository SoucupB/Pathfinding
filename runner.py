from os import listdir
import os
from os.path import isfile, join
path = os.getcwd().replace(chr(92), "//")
onlyfiles = [f for f in listdir(path) if isfile(join(path, f))]
print(path)
print(onlyfiles)