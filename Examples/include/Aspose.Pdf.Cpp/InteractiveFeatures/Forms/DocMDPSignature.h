﻿#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_DocMDPSignature_h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_DocMDPSignature_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Facades { class PdfFileSignature; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { enum class DocMDPAccessPermissions; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class Signature; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Forms {

/// <summary>
/// Represents the class of document MDP (modification detection and prevention) signature type.
/// </summary>
class ASPOSE_PDF_SHARED_API DocMDPSignature FINAL : public System::Object
{
    typedef DocMDPSignature ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::PdfFileSignature;
    
public:

    /// <summary>
    /// Returns the access permissions granted for this document.
    /// </summary>
    DocMDPAccessPermissions get_AccessPermissions();
    
    /// <summary>
    /// Initializes a new instance of the <see cref="DocMDPSignature"/> class.
    /// </summary>
    /// <param name="signature">The signature object that used during signing.</param>
    /// <param name="accessPermissions">The access permissions granted for this document.</param>
    DocMDPSignature(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Signature> signature, DocMDPAccessPermissions accessPermissions);
    
protected:

    /// <summary>
    /// Returns the signature object that used during signing.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Signature> get_Signature();
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Signature> _signature;
    DocMDPAccessPermissions _accessPermissions;
    
    /// <summary>
    /// Initializes the new signature reference entry.
    /// </summary>
    /// <param name="accessPermissions">The access permissions granted for this document.</param>
    void InitializeSignatureReference(DocMDPAccessPermissions accessPermissions);
    
};

} // namespace Forms
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_DocMDPSignature_h_

