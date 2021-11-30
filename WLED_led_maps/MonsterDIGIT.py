import json

N = 7       # Digits

dig = [i for i in range(28)]
L = dig[0:8][::-1]
M = dig[8:20]
R = dig[20:][::-1]

out = []
for n in range(N): # make it actually progress lengthwise down the "Digit"
    Ln = [i+28*n for i in L]
    Mn = [i+28*n for i in M]
    Rn = [i+28*n for i in R]
    out += Mn[0:2]
    for m in range(8): # serpentine the horizontal rows inside each "Digit"
        if (m % 2) == 0:
            out.append(Ln[m])
            out.append(Mn[m+2])
            out.append(Rn[m])
        else:
            out.append(Rn[m])
            out.append(Mn[m+2])
            out.append(Ln[m])
    out += Mn[-2:]

ledmap = {'map': out}

fid = open('ledmap.json', 'w')
json.dump(ledmap, fid, separators=(',',':'))
fid.close()