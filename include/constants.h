//
// Created by Rhys Work on 03/03/2025.
//

#ifndef CONSTANTS_H
#define CONSTANTS_H
#include <string>

using std::string;

// Directory names
const string DIR_NAME_TEST        = "subdir";
const string DIR_NAME_IMAGES      = "Images";
const string DIR_NAME_DOCUMENTS   = "Docs";
const string DIR_NAME_AUDIO       = "Audio";
const string DIR_NAME_VIDEO       = "Videos";
const string DIR_NAME_ARCHIVES    = "Archives";
const string DIR_NAME_FONTS       = "Fonts";
const string DIR_NAME_APPLICATION = "Application";
const string DIR_NAME_MISC        = "Misc";

// File extensions
// Images
const string EXT_JPG            = ".jpg";
const string EXT_JPEG           = ".jpeg";
const string EXT_PNG            = ".png";
const string EXT_BMP            = ".bmp";
const string EXT_GIF            = ".gif";
const string EXT_WEBP          = ".webp";
const string EXT_CR2            = ".cr2";
const string EXT_TIF            = ".tif";
const string EXT_SVG            = ".svg";
const string EXT_AVIF            = ".avif";

std::vector<const std::string&> extensions_images {
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

// Video
const string EXT_MP4            = ".mp4";
const string EXT_MKV            = ".mkv";
const string EXT_MOV            = ".mov";
const string EXT_AVI            = ".avi";

std::vector<const std::string&> extensions_video {
    EXT_MP4,
    EXT_MKV,
    EXT_MOV,
    EXT_AVI
};

// Audio
const string EXT_MP3            = ".mp3";
const string EXT_MID            = ".mid";
const string EXT_WAV            = ".wav";

std::vector<const std::string&> extensions_audio {
    EXT_MP3,
    EXT_MID,
    EXT_WAV
};

// Documents
const string EXT_PDF            = ".pdf";
const string EXT_DOC            = ".doc";
const string EXT_DOCX           = ".docx";
const string EXT_XLS            = ".xlsx";
const string EXT_XLSX          = ".xlsx";
const string EXT_PPT           = ".ppt";
const string EXT_PPTX          = ".pptx";

std::vector<const std::string&> extensions_documents {
    EXT_PDF,
    EXT_DOC,
    EXT_DOCX,
    EXT_XLS,
    EXT_XLSX,
    EXT_PPT,
    EXT_PPTX
};

// Archive
const string EXT_EPUB          = ".epub";
const string EXT_ZIP            = ".zip";
const string EXT_TAR            = ".tar";
const string EXT_TARGZ          = ".tar.gz";
const string EXT_RAR            = ".rar";
const string EXT_GZ            = ".gz";
const string EXT_DEB            = ".deb";
const string EXT_RPM            = ".rpm";
const string EXT_7Z            = ".7z";
const string EXT_XZ             = ".xz";
const string EXT_CAB            = ".cab";
const string EXT_LZ4            = ".lz";
const string EXT_Z              = ".z";

std::vector<const std::string&> extensions_archive {
    EXT_EPUB,
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

// Fonts
const string EXT_WOFF          = ".woff";
const string EXT_WOFF2         = ".woff2";
const string EXT_TTF           = ".ttf";
const string EXT_OTF            = ".otf";

std::vector<const std::string&> extensions_fonts {
    EXT_WOFF,
    EXT_WOFF2,
    EXT_TTF,
    EXT_OTF
};

// Application
const string EXT_WASM          = ".wasm";
const string EXT_DEX           = ".dex";
const string EXT_DEY           = ".dey";

std::vector<const std::string&> extensions_application {
    EXT_WASM,
    EXT_DEX,
    EXT_DEY
};

// Contains all of our file extension vectors within one parent vector,
// takes a reference to each vector.
std::vector<std::vector<const std::string&>&> extensions_all {
    extensions_images,
    extensions_video,
    extensions_audio,
    extensions_archive,
    extensions_documents,
    extensions_fonts,
    extensions_application
};

#endif //CONSTANTS_H
