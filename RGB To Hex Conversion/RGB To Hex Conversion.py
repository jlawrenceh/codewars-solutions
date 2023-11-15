def decToHexa(n):
    if n<0:
        return "00"
    elif n>255:
        return "FF"
    
    if n<16:
        return hex(n).replace("0x","0")
    else:
        return hex(n).replace("0x","")
    
def rgb(r, g, b):
    #your code here :)
    
    ans = decToHexa(r)
    ans += decToHexa(g)
    ans += decToHexa(b)
    return ans.upper()