# hd (Hex Dump)

Prints input to output, line by line. ASCII values of each character are displayed in hex under each character.
```
$ gcc hd.c -o hd
```
```
$ cat example.txt
This is a test of a file
for using my ASCII printing-program
        let's try some  tabs

and some extra
lines       $()%*#)
123456789

1       2       3       4

```
```
$ cat example.txt | ./hd
  T  h  i  s     i  s     a     t  e  s  t     o  f     a     f  i  l  e    \n
 54 68 69 73 20 69 73 20 61 20 74 65 73 74 20 6f 66 20 61 20 66 69 6c 65 20  a
  f  o  r     u  s  i  n  g     m  y     A  S  C  I  I     p  r  i  n  t  i  n  g  -  p  r  o  g  r  a  m \n
 66 6f 72 20 75 73 69 6e 67 20 6d 79 20 41 53 43 49 49 20 70 72 69 6e 74 69 6e 67 2d 70 72 6f 67 72 61 6d  a
 \t  l  e  t  '  s     t  r  y     s  o  m  e \t  t  a  b  s \n
  9 6c 65 74 27 73 20 74 72 79 20 73 6f 6d 65  9 74 61 62 73  a
 \t \t \n
  9  9  a
  a  n  d     s  o  m  e     e  x  t  r  a                   \n
 61 6e 64 20 73 6f 6d 65 20 65 78 74 72 61 20 20 20 20 20 20  a
  l  i  n  e  s                       $  (  )  %  *  #  ) \n
 6c 69 6e 65 73 20 20 20 20 20 20 20 24 28 29 25 2a 23 29  a
  1  2  3  4  5  6  7  8  9 \n
 31 32 33 34 35 36 37 38 39  a
 \n
  a
  1 \t  2 \t  3 \t  4 \t \n
 31  9 32  9 33  9 34  9  a
 \n
  a
```

