# Trove

Thanks for checking out the Trove repository. Trove is a CLI program that automatically sorts all files (within a given directory)
into categorised directories based on your chosen preset.

Trove has been written in C++ and uses CMake as it's build tool.

At this moment in time, Trove supports macOS and Linux only.

### Installation (macOS & Linux)
1. Clone this repository by running `git clone git@github.com:rhysez/trove_v2.git`
2. Enter the project directory using `cd <path-to-trove-directory>` and build the project. _Build script will be available soon, alternatively you can build using CMake_.
3. Add Trove to your PATH so that you can run the executable from anywhere. You can do this by adding the following line to your .zshrc (for macOS) or .bashrc (for Linux) `export PATH="$HOME/path-to-trove-directory/cmake-build-debug:$PATH"`
4. Restart your shell session, and you should be good to go!

### Getting started
To get started with Trove, you can simply start by running `trove sort <path-to-directory>`, substituting `<path-to-directory>` with the path to
your chosen directory. This command runs Trove's sort action, which will sort all files in your chosen directory into subdirectories based on their file type.

### Supported file types

#### Images
- **Extensions:**
    - `.jpg`
    - `.jpeg`
    - `.png`
    - `.bmp`
    - `.gif`
    - `.webp`
    - `.cr2`
    - `.tif`
    - `.svg`
    - `.avif`

- **Directory:**
    - `images/`

#### Video
- **Extensions:**
    - `.mp4`
    - `.mkv`
    - `.mov`
    - `.avi`

- **Directory:**
    - `videos/`

#### Audio
- **Extensions:**
    - `.mp3`
    - `.mid`
    - `.wav`

- **Directory:**
    - `audio/`

#### Documents
- **Extensions:**
    - `.pdf`
    - `.doc`
    - `.docx`
    - `.xlsx`
    - `.ppt`
    - `.pptx`
    - `.csv`
    - `.numbers`
    - `.json`
    - `.txt`

- **Directory:**
    - `docs/`

#### Archives
- **Extensions:**
    - `.zip`
    - `.tar`
    - `.tar.gz`
    - `.rar`
    - `.gz`
    - `.deb`
    - `.rpm`
    - `.7z`
    - `.xz`
    - `.cab`
    - `.lz`
    - `.z`

- **Directory:**
    - `archives/`

#### Ebooks
- **Extensions:**
    - `.epub`
    - `.mobi`
    - `.azw`

- **Directory:**
    - `ebooks/`

#### Fonts
- **Extensions:**
    - `.woff`
    - `.woff2`
    - `.ttf`
    - `.otf`

- **Directory:**
    - `fonts/`

#### Application
- **Extensions:**
    - `.wasm`
    - `.dex`
    - `.dey`

- **Directory:**
    - `application/`
