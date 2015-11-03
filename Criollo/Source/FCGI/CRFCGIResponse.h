//
//  CRFCGIResponse.h
//  Criollo
//
//  Created by Cătălin Stan on 10/30/15.
//  Copyright © 2015 Cătălin Stan. All rights reserved.
//

#import "CRResponse.h"

typedef UInt32  CRFCGIApplicationStatus;

typedef NS_ENUM(UInt8, CRFCGIProtocolStatus) {
    CRFCGIProtocolStatusRequestComplete = 0,
    CRFCGIProtocolStatusCannotMultiplexConnection = 1,
    CRFCGIProtocolStatusOverloaded = 2,
    CRFCGIProtocolStatusUnknownRole = 3,
};

extern NSString* NSStringFromCRFCGIProtocolStatus(CRFCGIProtocolStatus protocolStatus);

@interface CRFCGIResponse : CRResponse

@property (nonatomic, assign) CRFCGIApplicationStatus applicationStatus;
@property (nonatomic, assign) CRFCGIProtocolStatus protocolStatus;

@end