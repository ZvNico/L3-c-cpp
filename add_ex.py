"""this script setup the project for doing next exercise,
if you are on a new TP you need to create the TP folder"""
import os


def get_current_id(path):
    n = 1
    while os.path.exists(path % n):
        n += 1
    return n - 1


n_tp = get_current_id('TP%d')
n_ex = get_current_id(f'TP{n_tp}/ex%d')

n_ex += 1
os.mkdir(f'TP{n_tp}/ex{n_ex}')
f = open(f"TP{n_tp}/ex{n_ex}/ex{n_ex}.c", "a")
f.writelines([f'#include "ex{n_ex}.h"\n',
              '\n',
              f'int main_tp{n_tp}_ex{n_ex}() \u007b\n\n',
              '\treturn 0;\n',
              '\u007d'])
f.close()
f = open(f"TP{n_tp}/ex{n_ex}/ex{n_ex}.h", "a")

h_id = f'L3_TP{n_tp}_EX{n_ex}_H'
f.writelines([f'#ifndef {h_id}\n',
              f'#define {h_id}\n',
              '\n',
              '#include "stdio.h"\n',
              '\n',
              f'int main_tp{n_tp}_ex{n_ex}();\n',
              '\n',
              f'#endif //{h_id}'])

f = open('main.c', 'r')
lines = f.readlines()
lines[0] = f'#include "TP{n_tp}/ex{n_ex}/ex{n_ex}.h"\n'
lines[3] = f'\tmain_tp{n_tp}_ex{n_ex}();\n'
f.close()
f = open('main.c', 'w')
f.writelines(lines)
f.close()

f = open('CMakeLists.txt', 'r')
lines = f.readlines()
lines[4] = lines[4][:-2] + f' TP{n_tp}/ex{n_ex}/ex{n_ex}.h)\n'
lines[5] = lines[5][:-2] + f' TP{n_tp}/ex{n_ex}/ex{n_ex}.c)\n'

f.close()
f = open('CMakeLists.txt', 'w')
f.writelines(lines)
f.close()
