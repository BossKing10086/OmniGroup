// Copyright 2016 Omni Development, Inc. All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// RCS_ID("$Id$");

import Foundation

extension OFSelectionSet {
    public func insertOrderSortedObjects<Class : NSObject>(ofClass cls: Class.Type) -> [Class] {
        // TODO: The guts of this method could be cleaner once the rest of the class is more type-safe.
        let instances:[Class] = (copyObjectsSatisfyingPredicateBlock { $0 is Class }) as! [Class]
        return objectsSortedByInsertionOrder(instances) as! [Class]
    }
}
