# Trove

Thanks for checking out the Trove repository. Trove is a CLI program that automatically sorts all files (within a given directory)
into categorised directories based on your chosen preset.

Trove has been written in C++ and uses CMake as it's build tool.

At this moment in time, Trove supports MacOS only.

### Getting started
To get started with Trove, you can simply start by running `trove <path>`, subsituting `path` with the path to
your chosen directory. This will run Trove in it's default preset - `type`. 

The `type` preset sorts all of the files in your target directory into sub-directories, based on file types. You can
find a comprehensive list of all supported file types (and extensions) further below.