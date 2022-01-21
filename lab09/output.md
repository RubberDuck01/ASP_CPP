# Output
Output za lab09
### zad01
```
KORIJEN: 10
```
### zad02
```
KORIJEN: 10
============
PREORDER: 10
PREORDER: 5
PREORDER: 2
PREORDER: 7
PREORDER: 12
PREORDER: 11
INORDER: 2
INORDER: 5
INORDER: 7
INORDER: 10
INORDER: 11
INORDER: 12
POSTORDER: 2
POSTORDER: 7
POSTORDER: 5
POSTORDER: 11
POSTORDER: 12
POSTORDER: 10
```
### zad03
```
KORIJEN: 10
============
Broj listova: 3
```
### zad04
```
Broj listova: 3
Vrijednost: 10
Vrijednost: 12
1
```
##### Note:
- compiled with warning - *control reaches end of non-void function*
> bool kao ne vraca nista, a zapravo radi; ovaj output je za case u samom code (12) - 12 postoji i stoga vraca 1 (true)
> probao sam i drugi case (13) - 13 ne postoji i vratio je 0 (false) iako je prilikom compile puknuo warning
- in a nutshell: DA, radi! Ne bas fenomenalno, ali radi!
##### Additional notes:
- *zad01 i zad02* nemaju code, hence no code here
##### About...
> KDevelop 5.7.2\
> G++
