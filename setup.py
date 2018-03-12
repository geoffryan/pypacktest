from setuptools import setup, find_packages, Extension
import imp

version = imp.load_source('packtest.version', 'version.py')

goodbye = Extension('packtest.goodbye', 
                        sources=['src/packtest/goodbye/goodbyemodule.c'])

setup(
    name='packtest',
    version=version.version,
    description='Python Package Test',
    packages=['packtest'],
    package_dir={'' : 'src'} ,
    ext_modules=[goodbye]
)

