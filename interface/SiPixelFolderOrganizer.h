#ifndef SiPixelCommon_SiPixelFolderOrganizer_h
#define SiPixelCommon_SiPixelFolderOrganizer_h
// -*- C++ -*-
//
// Package:     SiPixelCommon
// Class  :     SiPixelFolderOrganizer
// 
/**\class SiPixelFolderOrganizer SiPixelFolderOrganizer.h DQM/SiPixelCommon/interface/SiPixelFolderOrganizer.h
   
Description: <Organizes the folders for the monitoring elements of the Pixel detector. Its methods return strings with names of folders to be created and used.>

Usage:
<usage>

*/
//
// Original Author:  chiochia
//         Created:  Thu Jan 26 23:49:46 CET 2006
// $Id: SiPixelFolderOrganizer.h,v 1.2 2007/08/21 03:56:19 andrewdc Exp $
#include "DQMServices/Core/interface/DQMStore.h"
#include <boost/cstdint.hpp>
#include <string>

class SiPixelFolderOrganizer {
  
 public:

  /// Constructor
  SiPixelFolderOrganizer();

  /// Destructor
  virtual ~SiPixelFolderOrganizer();
  
  /// Set folder name for a module or plaquette
  bool setModuleFolder(const uint32_t& rawdetid=0);

  /// Set folder name for a FED (used in the case of errors without detId)
  bool setFedFolder(const uint32_t FedId);
  
 private:

  std::string rootFolder;
  std::string slash;
  DQMStore* dbe_;
};
#endif
