//
// Created by Rhys Work on 03/03/2025.
//

#ifndef CONSTANTS_H
#define CONSTANTS_H
#include <string>
#include <vector>

using std::string;

// Typedef for clarity
typedef string file_extension;
typedef string dir_name;

// Declaration of directory names (extern for definition in .cpp)
extern const dir_name DIR_NAME_IMAGES;
extern const dir_name DIR_NAME_DOCUMENTS;
extern const dir_name DIR_NAME_AUDIO;
extern const dir_name DIR_NAME_VIDEO;
extern const dir_name DIR_NAME_ARCHIVES;
extern const dir_name DIR_NAME_EBOOKS;
extern const dir_name DIR_NAME_FONTS;
extern const dir_name DIR_NAME_APPLICATION;
extern const dir_name DIR_NAME_MISC;

// Declaration of file extensions
extern const file_extension EXT_JPG;
extern const file_extension EXT_JPEG;
extern const file_extension EXT_PNG;
extern const file_extension EXT_BMP;
extern const file_extension EXT_GIF;
extern const file_extension EXT_WEBP;
extern const file_extension EXT_CR2;
extern const file_extension EXT_TIF;
extern const file_extension EXT_SVG;
extern const file_extension EXT_AVIF;
extern const file_extension EXT_MP4;
extern const file_extension EXT_MKV;
extern const file_extension EXT_MOV;
extern const file_extension EXT_AVI;
extern const file_extension EXT_MP3;
extern const file_extension EXT_MID;
extern const file_extension EXT_WAV;
extern const file_extension EXT_PDF;
extern const file_extension EXT_DOC;
extern const file_extension EXT_DOCX;
extern const file_extension EXT_XLS;
extern const file_extension EXT_XLSX;
extern const file_extension EXT_PPT;
extern const file_extension EXT_PPTX;
extern const file_extension EXT_CSV;
extern const file_extension EXT_NUMBERS;
extern const file_extension EXT_JSON;
extern const file_extension EXT_TXT;
extern const file_extension EXT_ZIP;
extern const file_extension EXT_TAR;
extern const file_extension EXT_TARGZ;
extern const file_extension EXT_RAR;
extern const file_extension EXT_GZ;
extern const file_extension EXT_DEB;
extern const file_extension EXT_RPM;
extern const file_extension EXT_7Z;
extern const file_extension EXT_XZ;
extern const file_extension EXT_CAB;
extern const file_extension EXT_LZ4;
extern const file_extension EXT_Z;
extern const file_extension EXT_EPUB;
extern const file_extension EXT_MOBI;
extern const file_extension EXT_AZW;
extern const file_extension EXT_WOFF;
extern const file_extension EXT_WOFF2;
extern const file_extension EXT_TTF;
extern const file_extension EXT_OTF;
extern const file_extension EXT_WASM;
extern const file_extension EXT_DEX;
extern const file_extension EXT_DEY;

// Declaration of extension lists
extern std::vector<std::string> extensions_images;
extern std::vector<std::string> extensions_video;
extern std::vector<std::string> extensions_audio;
extern std::vector<std::string> extensions_documents;
extern std::vector<std::string> extensions_archive;
extern std::vector<std::string> extensions_ebooks;
extern std::vector<std::string> extensions_fonts;
extern std::vector<std::string> extensions_application;

// Definition of the SortableFileType struct
struct SortableFileType {
    string dir_name {};
    std::vector<std::string> extensions {};
};

// Declaration of SortableFileType structures
extern std::vector<SortableFileType> sortable_file_types;

#endif // CONSTANTS_H

