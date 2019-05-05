#pragma once

#include "ILog.h"

class DskTypeManager : public ITypeManager
{
public:

   DskTypeManager(void);
   virtual ~DskTypeManager(void);

   //////////////////////////////////////////////////////////
   // Implementation of ITypeManager
   virtual int GetTypeFromFile(std::string str);
   virtual int GetTypeFromBuffer (unsigned char* buffer, int size);
   virtual int GetTypeFromMultipleTypes ( int * type_list, int nb_types );


};

