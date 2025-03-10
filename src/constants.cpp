//
// Created by Rhys Work on 06/03/2025.
//

#include "constants.h"

// Definitions of directory names
const dir_name DIR_NAME_IMAGES = "images/";
const dir_name DIR_NAME_DOCUMENTS = "docs/";
const dir_name DIR_NAME_AUDIO = "audio/";
const dir_name DIR_NAME_VIDEO = "videos/";
const dir_name DIR_NAME_ARCHIVES = "archives/";
const dir_name DIR_NAME_EBOOKS = "ebooks/";
const dir_name DIR_NAME_FONTS = "fonts/";
const dir_name DIR_NAME_APPLICATION = "application/";
const dir_name DIR_NAME_MISC = "misc/";

// Image extensions
const file_extension EXT_JPG = ".jpg";
const file_extension EXT_JPEG = ".jpeg";
const file_extension EXT_PNG = ".png";
const file_extension EXT_BMP = ".bmp";
const file_extension EXT_GIF = ".gif";
const file_extension EXT_WEBP = ".webp";
const file_extension EXT_CR2 = ".cr2";
const file_extension EXT_TIF = ".tif";
const file_extension EXT_SVG = ".svg";
const file_extension EXT_AVIF = ".avif";
// Video extensions
const file_extension EXT_MP4 = ".mp4";
const file_extension EXT_MKV = ".mkv";
const file_extension EXT_MOV = ".mov";
const file_extension EXT_AVI = ".avi";
// Audio extensions
const file_extension EXT_MP3 = ".mp3";
const file_extension EXT_MID = ".mid";
const file_extension EXT_WAV = ".wav";
// Document extensions
const file_extension EXT_PDF = ".pdf";
const file_extension EXT_DOC = ".doc";
const file_extension EXT_DOCX = ".docx";
const file_extension EXT_XLS = ".xlsx";
const file_extension EXT_XLSX = ".xlsx";
const file_extension EXT_PPT = ".ppt";
const file_extension EXT_PPTX = ".pptx";
const file_extension EXT_CSV = ".csv";
const file_extension EXT_NUMBERS = ".numbers";
const file_extension EXT_JSON = ".json";
const file_extension EXT_TXT = ".txt";
// Archive extensions
const file_extension EXT_ZIP = ".zip";
const file_extension EXT_TAR = ".tar";
const file_extension EXT_TARGZ = ".tar.gz";
const file_extension EXT_RAR = ".rar";
const file_extension EXT_GZ = ".gz";
const file_extension EXT_DEB = ".deb";
const file_extension EXT_RPM = ".rpm";
const file_extension EXT_7Z = ".7z";
const file_extension EXT_XZ = ".xz";
const file_extension EXT_CAB = ".cab";
const file_extension EXT_LZ4 = ".lz";
const file_extension EXT_Z = ".z";
// Ebook extensions
const file_extension EXT_EPUB = ".epub";
const file_extension EXT_MOBI = ".mobi";
const file_extension EXT_AZW = ".azw";
// Font extensions
const file_extension EXT_WOFF = ".woff";
const file_extension EXT_WOFF2 = ".woff2";
const file_extension EXT_TTF = ".ttf";
const file_extension EXT_OTF = ".otf";
// Application extensions
const file_extension EXT_WASM = ".wasm";
const file_extension EXT_DEX = ".dex";
const file_extension EXT_DEY = ".dey";

// Definitions of extension lists
std::vector<std::string> extensions_images = {
    EXT_JPG,
    EXT_JPEG,
    EXT_PNG,
    EXT_BMP,
    EXT_GIF,
    EXT_WEBP,
    EXT_CR2,
    EXT_TIF,
    EXT_SVG,
    EXT_AVIF
};

std::vector<std::string> extensions_video = {
    EXT_MP4,
    EXT_MKV,
    EXT_MOV,
    EXT_AVI
};

std::vector<std::string> extensions_audio = {
    EXT_MP3,
    EXT_MID,
    EXT_WAV
};

std::vector<std::string> extensions_documents = {
    EXT_PDF,
    EXT_DOC,
    EXT_DOCX,
    EXT_XLS,
    EXT_XLSX,
    EXT_PPT,
    EXT_PPTX,
    EXT_CSV,
    EXT_NUMBERS,
    EXT_JSON,
    EXT_TXT
};

std::vector<std::string> extensions_archive = {
    EXT_ZIP,
    EXT_TAR,
    EXT_TARGZ,
    EXT_RAR,
    EXT_GZ,
    EXT_DEB,
    EXT_RPM,
    EXT_7Z,
    EXT_XZ,
    EXT_CAB,
    EXT_LZ4,
    EXT_Z
};

std::vector<std::string> extensions_ebooks = {
    EXT_EPUB,
    EXT_MOBI,
    EXT_AZW
};

std::vector<std::string> extensions_fonts = {
    EXT_WOFF,
    EXT_WOFF2,
    EXT_TTF,
    EXT_OTF
};

std::vector<std::string> extensions_application = {
    EXT_WASM,
    EXT_DEX,
    EXT_DEY
};

SortableFileType images {DIR_NAME_IMAGES, extensions_images};
SortableFileType video {DIR_NAME_VIDEO, extensions_video};
SortableFileType audio {DIR_NAME_AUDIO, extensions_audio};
SortableFileType documents {DIR_NAME_DOCUMENTS, extensions_documents};
SortableFileType archive {DIR_NAME_ARCHIVES, extensions_archive};
SortableFileType ebooks {DIR_NAME_EBOOKS, extensions_ebooks};
SortableFileType fonts {DIR_NAME_FONTS, extensions_fonts};
SortableFileType application {DIR_NAME_APPLICATION, extensions_application};

std::vector<SortableFileType> sortable_file_types = {
    images,
    video,
    audio,
    documents,
    archive,
    ebooks,
    fonts,
    application
};
