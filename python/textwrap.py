import textwrap
def wrap(string,max_width):
    x = print(textwrap.fill(string,4))
    return x

wrap(string="ABCDEFGHIJKLMNPOQRSTUVWXYZ",max_width=4)
