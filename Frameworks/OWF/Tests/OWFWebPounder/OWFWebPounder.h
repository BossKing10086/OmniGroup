// Copyright 1997-2005, 2013 Omni Development, Inc. All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$


#import <OmniFoundation/OFObject.h>
#import <OWF/OWFWeakRetainConcreteImplementation.h>
#import <OWF/OWTargetProtocol.h>

@interface OWFWebPounder : OFObject <OWFWeakRetain, OWTarget>
{
    OWFWeakRetainConcreteImplementation_IVARS;
}

+ (void)logStatus;
+ (void)flushCache;
+ (void)fetchAddressString:(NSString *)urlString;
- (id)initWithAddressString:(NSString *)addressString;

@end
