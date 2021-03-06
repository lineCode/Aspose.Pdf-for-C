﻿#ifndef _Aspose_Pdf_Data_XMP_XmpNamedValue_h_
#define _Aspose_Pdf_Data_XMP_XmpNamedValue_h_

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace Data { namespace XMP { class XmpValue; } } } } }

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Data {

namespace XMP {

class ASPOSE_PDF_SHARED_API XmpNamedValue : public System::Object
{
    typedef XmpNamedValue ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::String get_Key();
    System::SharedPtr<XmpValue> get_Value();
    
    XmpNamedValue(System::String key, System::SharedPtr<XmpValue> value);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String _key;
    System::SharedPtr<XmpValue> _value;
    
};

} // namespace XMP
} // namespace Data
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Data_XMP_XmpNamedValue_h_

