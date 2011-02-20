//
//  NSDate+JSON.h
//  Geonoter
//
//  Created by Patrick Quinn-Graham on 09-02-09.
//  Copyright 2009-2010 Patrick Quinn-Graham. All rights reserved.
//
//

@interface NSDate (NSDateForSQLDatabase)

+dateWithSQLString:(NSString*)sqlDate;
-(NSString*)sqlDateString;

@end
