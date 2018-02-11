# def solve(probdata):
#     for i in probdata:
#         try:
#             if (probdata.index(-i)):
#                 print(str(i)+" "+str(probdata.pop(probdata.index(-i))),end = ' ')
#         except:
#             pass
# t = int(input())
# a = []
# for k in range(0,t):
#     r = input()
#     listx = input().split(' ')
#     for i in range(0,r):
#         listx[i] = int(listx[i])
#     a.append(listx)    
# for i in a:
#     solve(i)
#     print('')


y = input().split(' ')
mini= 100000000000
for i in range(0,len(y)):
    y[i] = int(y[i])
    if y[i] < mini:
        mini = y[i]
counter = 0
for i in range(1,mini):
    if (y[0]%i == 0 and y[1]%i == 0):
        counter += 1 
print(counter)
