﻿#ifndef _Aspose_Pdf_Exceptions_UnsupportedFontTypeException_h_
#define _Aspose_Pdf_Exceptions_UnsupportedFontTypeException_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/exceptions.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Exceptions {

/// <summary>
/// The exception that is thrown when a font type is not supported.
/// </summary>
class ASPOSE_PDF_SHARED_API UnsupportedFontTypeException FINAL : public System::ApplicationException
{
    typedef UnsupportedFontTypeException ThisType;
    typedef System::ApplicationException BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual ~UnsupportedFontTypeException();
    
    /// <summary>
    /// Initializes a new instance of the <see cref="UnsupportedFontTypeException"/> class.
    /// </summary>
    /// <param name="message">The message.</param>
    UnsupportedFontTypeException(System::String message);
    /// <summary>
    /// Initializes a new instance of the <see cref="UnsupportedFontTypeException"></see> class with a specified error message and a reference to the inner exception that is the cause of this exception.
    /// </summary>
    /// <param name="message">The error message that explains the reason for the exception. </param>
    /// <param name="innerException">The exception that is the cause of the current exception, or a null reference (Nothing in Visual Basic) if no inner exception is specified. </param>
    UnsupportedFontTypeException(System::String message, System::Exception innerException);
    /// <summary>
    /// Initializes a new instance of the <see cref="UnsupportedFontTypeException"></see> class with a specified error message and a reference to the inner exception that is the cause of this exception.
    /// </summary>
    /// <param name="innerException">The exception that is the cause of the current exception, or a null reference (Nothing in Visual Basic) if no inner exception is specified. </param>
    UnsupportedFontTypeException(System::Exception innerException);
    UnsupportedFontTypeException();
    UnsupportedFontTypeException(std::nullptr_t);
    
};

} // namespace Exceptions
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Exceptions_UnsupportedFontTypeException_h_

