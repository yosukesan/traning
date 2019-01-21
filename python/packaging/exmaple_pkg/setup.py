
import setuptools

with open("README.md", "r") as fh:
	long_description = fh.read()

setuptools.setup(
	name = "example_pkg",
	version = "0.0.1",
	author = "example author",
	author_email = "author@example.com",
	description = "A samll example package",
	long_description = long_description,
	long_description_content_type = "text/markdown",
	packages = setuptools.find_packages(),
	classifier = [
		"Progragramming Languages :: Python :: 3",
		"License :: OSI Approved :: MIT License",
		"Operationg System :: OS Independent",
	],
)

