## Python Package Test ##

Just a simple package test.  Install with:
```bash
$ python setup.py develop
```

Then just `import packtest` in your favorite Python interpreter. Available functions are `sayhello`, `hi`, `sayslogan`, `saygoodbye`, and `sayonara` in the modules `hello` and `goodbye`.  

`hello` also contains the variable `slogan` which should (?) be printed by `sayslogan()`

When you're done having fun uninstall with:

```bash
$ python setup.py develop --uninstall
```
