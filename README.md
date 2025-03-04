# Trove

Thanks for checking out the Trove repository. Trove is a CLI program that automatically sorts all files (within a given directory)
into categorised directories based on your chosen preset.

Trove has been written in C++ and uses CMake as it's build tool.

At this moment in time, Trove supports MacOS only.

### Installation
1. Clone this repository by running `git clone git@github.com:rhysez/trove_v2.git`
2. Enter the project directory using `cd <path-to-trove-directory>` and build the project. _Build script will be available soon, alternatively you can build using CMake_.
3. Add Trove to your PATH so that you can run the executable from anywhere. You can do this by adding the following line to your .zshrc `export PATH="$HOME/path-to-trove-directory/cmake-build-debug:$PATH"`
4. Restart your shell session, and you should be good to go!
### Getting started
To get started with Trove, you can simply start by running `trove <path>`, subsituting `path` with the path to
your chosen directory. This will run Trove in it's default preset - `type`. 

The `type` preset sorts all of the files in your target directory into sub-directories, based on file types. You can
find a comprehensive list of all supported file types (and extensions) further below.