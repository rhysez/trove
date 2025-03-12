//
// Created by Rhys Work on 03/03/2025.
//

#ifndef CONSTANTS_H
#define CONSTANTS_H
#include <string>
#include <vector>


// Declaration of directory names (extern for definition in .cpp)
extern const std::string DIR_NAME_IMAGES;
extern const std::string DIR_NAME_DOCUMENTS;
extern const std::string DIR_NAME_AUDIO;
extern const std::string DIR_NAME_VIDEO;
extern const std::string DIR_NAME_ARCHIVES;
extern const std::string DIR_NAME_EBOOKS;
extern const std::string DIR_NAME_FONTS;
extern const std::string DIR_NAME_APPLICATION;
extern const std::string DIR_NAME_MISC;

// Declaration of file extensions
extern const std::string EXT_JPG;
extern const std::string EXT_JPEG;
extern const std::string EXT_PNG;
extern const std::string EXT_BMP;
extern const std::string EXT_GIF;
extern const std::string EXT_WEBP;
extern const std::string EXT_CR2;
extern const std::string EXT_TIF;
extern const std::string EXT_SVG;
extern const std::string EXT_AVIF;
extern const std::string EXT_MP4;
extern const std::string EXT_MKV;
extern const std::string EXT_MOV;
extern const std::string EXT_AVI;
extern const std::string EXT_MP3;
extern const std::string EXT_MID;
extern const std::string EXT_WAV;
extern const std::string EXT_PDF;
extern const std::string EXT_DOC;
extern const std::string EXT_DOCX;
extern const std::string EXT_XLS;
extern const std::string EXT_XLSX;
extern const std::string EXT_PPT;
extern const std::string EXT_PPTX;
extern const std::string EXT_CSV;
extern const std::string EXT_NUMBERS;
extern const std::string EXT_JSON;
extern const std::string EXT_TXT;
extern const std::string EXT_ZIP;
extern const std::string EXT_TAR;
extern const std::string EXT_TARGZ;
extern const std::string EXT_RAR;
extern const std::string EXT_GZ;
extern const std::string EXT_DEB;
extern const std::string EXT_RPM;
extern const std::string EXT_7Z;
extern const std::string EXT_XZ;
extern const std::string EXT_CAB;
extern const std::string EXT_LZ4;
extern const std::string EXT_Z;
extern const std::string EXT_EPUB;
extern const std::string EXT_MOBI;
extern const std::string EXT_AZW;
extern const std::string EXT_WOFF;
extern const std::string EXT_WOFF2;
extern const std::string EXT_TTF;
extern const std::string EXT_OTF;
extern const std::string EXT_WASM;
extern const std::string EXT_DEX;
extern const std::string EXT_DEY;

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
    std::string dir_name {};
    std::vector<std::string> extensions {};
};

// Declaration of SortableFileType structures
extern std::vector<SortableFileType> sortable_file_types;

#endif // CONSTANTS_H

