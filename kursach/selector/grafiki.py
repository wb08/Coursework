import sqlite3
from math  import log10, cos, tan, sin
import matplotlib.pyplot as plt
import matplotlib.pyplot as plt1



def math_operation():
    a = 1
    b = 1
    c = 4
    x = int(input('Введите x:'))
    y = int(input('Введите y:'))
    arr1 = []
    arr2 = []
    x_pribavl = x
    y_pribavl = y
    id_znach1 = 0
    id_znach2 = 0
    while x < x_pribavl + 1000 and y < y_pribavl + 1000:
        try:
            t1 = 1 / c * (1 / (a * x + b)) + (y / c * log10((y * x + a) / (a * x + b)))



        except:
            t1 = ''

        arr1.append(t1)

        try:
            t2 = sin(a * x) / (2 * a * cos(x) * cos(x)) + (
                    1 / (2 * a) * (log10(tan(a * x / 2))))



        except:
            t2 = ''

        arr2.append(t2)
        x += 1
        y += 1
    con = sqlite3.connect('math.sqlite')
    cursor = con.cursor()
    cursor.execute("""CREATE TABLE IF NOT EXISTS math(id PRIMARY KEY,t1 REAL,
                                                              t2 REAL )""")
    cursor.execute('''DELETE FROM math''')
    id = 1
    for arr1_znach, arr2_znach in zip(arr1, arr2):
        cursor.execute("INSERT INTO math(id,t1,t2) VALUES (?,?,?)", (id, arr1_znach, arr2_znach))
        id += 1
    left_t1 = int(input('Введите левое значение для t1: '))
    right_t1 = int(input('Введите правое значение для t1: '))
    tupl_t1 = (left_t1, right_t1,)
    ass = cursor.execute('SELECT t1,id FROM math WHERE t1>? AND t1<?', tupl_t1)
    vse_znach_t1 = ass.fetchall()
    id1_arr = []
    znach1_arr = []
    for i in range(len(vse_znach_t1)):
        id1_arr.append(vse_znach_t1[i][1])
        znach1_arr.append(vse_znach_t1[i][0])
    max_id1 = max(id1_arr)
    min_id1 = min(id1_arr)
    left_t2 = int(input('Введите левое значение для t2: '))
    right_t2 = int(input('Введите правое значение для t2: '))

    tupl_t2 = (left_t2, right_t2,)
    ad = cursor.execute('SELECT t2,id FROM math WHERE t2>? AND t2<?', tupl_t2)
    vse_znach_t2 = ad.fetchall()
    id2_arr = []
    znach2_arr = []
    for i in range(len(vse_znach_t2)):
        id2_arr.append(vse_znach_t2[i][1])
        znach2_arr.append(vse_znach_t2[i][0])
    max_id2 = max(id2_arr)
    min_id2 = min(id2_arr)

    con.commit()
    con.close()


    return left_t1,right_t1,min_id1,max_id1,id1_arr,znach1_arr,left_t2,right_t2,min_id2,max_id2,id2_arr,znach2_arr

def grafik1(left_t1,right_t1,min_id1,max_id1,id1_arr,znach1_arr):

    line1= plt.plot(znach1_arr,id1_arr, 'b.-')

    plt.axis([left_t1-2, right_t1+2, min_id1-2, max_id1+2])

    plt.title(u'Зависимость t1 от id')

    plt.xlabel(u't1')
    plt.ylabel(u'id')


    plt.grid()
    plt.savefig('grafik1.png', format='png')
    plt.cla()
    plt.clf()


def grafik2(left_t2,right_t2,min_id2,max_id2,id2_arr,znach2_arr):
    plt1.plot(znach2_arr, id2_arr, 'b.-')
    plt1.axis([left_t2 - 2, right_t2 + 2, min_id2 - 2, max_id2 + 2])

    plt1.title(u'Зависимость t2 от id')

    plt1.xlabel(u't2')
    plt1.ylabel(u'id')

    plt1.grid()
    plt1.savefig('grafik2.png', format='png')





def main():
   left_t1,right_t1,min_id1,max_id1,id1_arr,znach1_arr,left_t2,right_t2,min_id2,max_id2,id2_arr,znach2_arr=math_operation()
   grafik1(left_t1,right_t1,min_id1,max_id1,id1_arr,znach1_arr)
   grafik2(left_t2,right_t2,min_id2,max_id2,id2_arr,znach2_arr)


if __name__=='__main__':
    main()