﻿#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_Option_h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_Option_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Facades { class Form; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class OptionCollection; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class BaseOption; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Forms {

/// <summary>
/// Class represents option of choice field.
/// </summary>
class ASPOSE_PDF_SHARED_API Option FINAL : public System::Object
{
    typedef Option ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Facades::Form;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::OptionCollection;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::OptionCollection;
    
public:

    /// <summary>
    /// Gets or sets option export value.
    /// </summary>
    System::String get_Value();
    /// <summary>
    /// Gets or sets option export value.
    /// </summary>
    void set_Value(System::String value);
    /// <summary>
    /// Gets or sets name of option.
    /// </summary>
    System::String get_Name();
    /// <summary>
    /// Gets or sets name of option.
    /// </summary>
    void set_Name(System::String value);
    /// <summary>
    /// Gets or sets selected status of option. Returns true if option is selected.
    /// </summary>
    bool get_Selected();
    /// <summary>
    /// Gets or sets selected status of option. Returns true if option is selected.
    /// </summary>
    void set_Selected(bool value);
    /// <summary>
    /// Gets index of the option. 
    /// </summary>
    int32_t get_Index();
    
protected:

    System::SharedPtr<BaseOption> option;
    
    Option(System::SharedPtr<BaseOption> option);
    
    bool HasExportValue();
    System::Object::shared_members_type GetSharedMembers() override;
    
};

} // namespace Forms
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_Option_h_

