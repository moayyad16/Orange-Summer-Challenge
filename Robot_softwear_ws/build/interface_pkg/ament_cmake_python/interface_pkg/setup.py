from setuptools import find_packages
from setuptools import setup

setup(
    name='interface_pkg',
    version='0.0.0',
    packages=find_packages(
        include=('interface_pkg', 'interface_pkg.*')),
)
