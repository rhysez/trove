//
// Created by Rhys Work on 06/03/2025.
//

#include "constants.h"

// Definitions of directory names
const std::string DIR_NAME_IMAGES = "images/";
const std::string DIR_NAME_DOCUMENTS = "docs/";
const std::string DIR_NAME_AUDIO = "audio/";
const std::string DIR_NAME_VIDEO = "videos/";
const std::string DIR_NAME_ARCHIVES = "archives/";
const std::string DIR_NAME_EBOOKS = "ebooks/";
const std::string DIR_NAME_FONTS = "fonts/";
const std::string DIR_NAME_APPLICATION = "application/";
const std::string DIR_NAME_MISC = "misc/";

const std::vector<std::string> DIR_NAMES = {
    DIR_NAME_IMAGES,
    DIR_NAME_DOCUMENTS,
    DIR_NAME_AUDIO,
    DIR_NAME_VIDEO,
    DIR_NAME_ARCHIVES,
    DIR_NAME_EBOOKS,
    DIR_NAME_FONTS,
    DIR_NAME_APPLICATION,
    DIR_NAME_MISC
};

// Image extensions
const std::string EXT_JPG = ".jpg";
const std::string EXT_JPEG = ".jpeg";
const std::string EXT_PNG = ".png";
const std::string EXT_BMP = ".bmp";
const std::string EXT_GIF = ".gif";
const std::string EXT_WEBP = ".webp";
const std::string EXT_CR2 = ".cr2";
const std::string EXT_TIF = ".tif";
const std::string EXT_SVG = ".svg";
const std::string EXT_AVIF = ".avif";
// Video extensions
const std::string EXT_MP4 = ".mp4";
const std::string EXT_MKV = ".mkv";
const std::string EXT_MOV = ".mov";
const std::string EXT_AVI = ".avi";
// Audio extensions
const std::string EXT_MP3 = ".mp3";
const std::string EXT_MID = ".mid";
const std::string EXT_WAV = ".wav";
// Document extensions
const std::string EXT_PDF = ".pdf";
const std::string EXT_DOC = ".doc";
const std::string EXT_DOCX = ".docx";
const std::string EXT_XLS = ".xlsx";
const std::string EXT_XLSX = ".xlsx";
const std::string EXT_PPT = ".ppt";
const std::string EXT_PPTX = ".pptx";
const std::string EXT_CSV = ".csv";
const std::string EXT_NUMBERS = ".numbers";
const std::string EXT_JSON = ".json";
const std::string EXT_TXT = ".txt";
// Archive extensions
const std::string EXT_ZIP = ".zip";
const std::string EXT_TAR = ".tar";
const std::string EXT_TARGZ = ".tar.gz";
const std::string EXT_RAR = ".rar";
const std::string EXT_GZ = ".gz";
const std::string EXT_DEB = ".deb";
const std::string EXT_RPM = ".rpm";
const std::string EXT_7Z = ".7z";
const std::string EXT_XZ = ".xz";
const std::string EXT_CAB = ".cab";
const std::string EXT_LZ4 = ".lz";
const std::string EXT_Z = ".z";
// Ebook extensions
const std::string EXT_EPUB = ".epub";
const std::string EXT_MOBI = ".mobi";
const std::string EXT_AZW = ".azw";
// Font extensions
const std::string EXT_WOFF = ".woff";
const std::string EXT_WOFF2 = ".woff2";
const std::string EXT_TTF = ".ttf";
const std::string EXT_OTF = ".otf";
// Application extensions
const std::string EXT_WASM = ".wasm";
const std::string EXT_DEX = ".dex";
const std::string EXT_DEY = ".dey";

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
