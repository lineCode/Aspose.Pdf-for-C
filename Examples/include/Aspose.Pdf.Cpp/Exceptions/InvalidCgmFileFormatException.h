﻿#ifndef _Aspose_Pdf_Exceptions_InvalidCgmFileFormatException_h_
#define _Aspose_Pdf_Exceptions_InvalidCgmFileFormatException_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/exceptions.h>

#include "Exceptions/InvalidFileFormatException.h"

namespace Aspose {

namespace Pdf {

namespace Exceptions {

/// <summary>
/// The exception that is thrown when an operation with form type is not valid.
/// </summary>
class ASPOSE_PDF_SHARED_API InvalidFormTypeOperationException FINAL : public System::InvalidOperationException
{
    typedef InvalidFormTypeOperationException ThisType;
    typedef System::InvalidOperationException BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual ~InvalidFormTypeOperationException();
    
    /// <summary>
    /// Initializes a new instance of the <see cref="InvalidFormTypeOperationException"/> class.
    /// </summary>
    /// <param name="message">The message.</param>
    InvalidFormTypeOperationException(System::String message);
    /// <summary>
    /// Initializes a new instance of the <see cref="InvalidFormTypeOperationException"></see> class with a specified error message and a reference to the inner exception that is the cause of this exception.
    /// </summary>
    /// <param name="message">The error message that explains the reason for the exception. </param>
    /// <param name="innerException">The exception that is the cause of the current exception, or a null reference (Nothing in Visual Basic) if no inner exception is specified. </param>
    InvalidFormTypeOperationException(System::String message, System::Exception innerException);
    /// <summary>
    /// Initializes a new instance of the <see cref="InvalidFormTypeOperationException"></see> class with a specified error message and a reference to the inner exception that is the cause of this exception.
    /// </summary>
    /// <param name="innerException">The exception that is the cause of the current exception, or a null reference (Nothing in Visual Basic) if no inner exception is specified. </param>
    InvalidFormTypeOperationException(System::Exception innerException);
    InvalidFormTypeOperationException();
    InvalidFormTypeOperationException(std::nullptr_t);
    
};

/// <summary>
/// The exception that is thrown when a Cgm file is invalid.
/// </summary>
class ASPOSE_PDF_SHARED_API InvalidCgmFileFormatException FINAL : public Aspose::Pdf::Exceptions::InvalidFileFormatException
{
    typedef InvalidCgmFileFormatException ThisType;
    typedef Aspose::Pdf::Exceptions::InvalidFileFormatException BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual ~InvalidCgmFileFormatException();
    
    /// <summary>
    /// Initializes a new instance of the <see cref="InvalidCgmFileFormatException"/> class.
    /// </summary>
    /// <param name="message">The message.</param>
    InvalidCgmFileFormatException(System::String message);
    /// <summary>
    /// Initializes a new instance of the <see cref="InvalidCgmFileFormatException"></see> class with a specified error message and a reference to the inner exception that is the cause of this exception.
    /// </summary>
    /// <param name="message">The error message that explains the reason for the exception. </param>
    /// <param name="innerException">The exception that is the cause of the current exception, or a null reference (Nothing in Visual Basic) if no inner exception is specified. </param>
    InvalidCgmFileFormatException(System::String message, System::Exception innerException);
    /// <summary>
    /// Initializes a new instance of the <see cref="InvalidCgmFileFormatException"></see> class with a specified error message and a reference to the inner exception that is the cause of this exception.
    /// </summary>
    /// <param name="innerException">The exception that is the cause of the current exception, or a null reference (Nothing in Visual Basic) if no inner exception is specified. </param>
    InvalidCgmFileFormatException(System::Exception innerException);
    InvalidCgmFileFormatException();
    InvalidCgmFileFormatException(std::nullptr_t);
    
};

} // namespace Exceptions
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Exceptions_InvalidCgmFileFormatException_h_

