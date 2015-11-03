//
//  CRFCGIServer.m
//  Criollo
//
//  Created by Cătălin Stan on 10/25/15.
//  Copyright © 2015 Cătălin Stan. All rights reserved.
//

#import "CRFCGIServer.h"
#import "CRFCGIConnection.h"
#import "CRFCGIServerConfiguration.h"

@implementation CRFCGIServer

- (instancetype)initWithDelegate:(id<CRServerDelegate>)delegate {
    self = [super initWithDelegate:delegate];
    if ( self != nil ) {
        self.configuration = [[CRFCGIServerConfiguration alloc] init];
    }
    return self;
}

- (CRConnection*)newConnectionWithSocket:(GCDAsyncSocket*)socket {
    CRFCGIConnection* connection = [[CRFCGIConnection alloc] initWithSocket:socket server:self];
    return connection;
}

@end