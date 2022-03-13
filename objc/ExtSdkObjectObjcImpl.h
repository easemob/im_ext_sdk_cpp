#ifndef EXTSDKOBJECTOBJC_H
#define EXTSDKOBJECTOBJC_H

#import <Foundation/Foundation.h>
#include "ExtSdkObject.h"

EXT_SDK_NAMESPACE_BEGIN

class ExtSdkObjectObjcImpl : public ExtSdkObject {
public:
    virtual ~ExtSdkObjectObjcImpl() {}
    ExtSdkObjectObjcImpl(NSObject* object);
    
public:
    NSObject* obj;
};

EXT_SDK_NAMESPACE_END


#endif // EXTSDKOBJECTOBJC_H
