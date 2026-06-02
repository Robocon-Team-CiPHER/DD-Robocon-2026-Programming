from setuptools import find_packages
from setuptools import setup

setup(
    name='r2_detection',
    version='1.0.0',
    packages=find_packages(
        include=('r2_detection', 'r2_detection.*')),
)
