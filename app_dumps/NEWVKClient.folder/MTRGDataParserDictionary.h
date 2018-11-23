/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "IMTRGDataDictionary.h"

@class NSDictionary;

@interface MTRGDataParserDictionary : XXUnknownSuperclass <IMTRGDataDictionary> {
	NSDictionary* _dictionary;
}
-(void).cxx_destruct;
-(void)enumerateWithBlock:(id)block;
-(BOOL)checkDataDictionaryValueForKey:(id)key dataDictValue:(id*)value;
-(BOOL)checkDataArrayValueForKey:(id)key dataArrayValue:(id*)value;
-(BOOL)checkArrayValueForKey:(id)key arrayValue:(id*)value;
-(BOOL)checkDictionaryValueForKey:(id)key dictValue:(id*)value;
-(BOOL)checkNumberValueForKey:(id)key numberValue:(id*)value;
-(BOOL)checkStringValueForKey:(id)key strValue:(id*)value;
-(id)dataDictionaryValueForKey:(id)key errorBlock:(id)block nilBlock:(id)block3;
-(id)dataArrayValueForKey:(id)key errorBlock:(id)block nilBlock:(id)block3;
-(id)arrayValueForKey:(id)key errorBlock:(id)block nilBlock:(id)block3;
-(id)dictionaryValueForKey:(id)key errorBlock:(id)block nilBlock:(id)block3;
-(id)numberValueForKey:(id)key errorBlock:(id)block nilBlock:(id)block3;
-(id)stringValueForKey:(id)key errorBlock:(id)block nilBlock:(id)block3;
-(id)dataDictArrayForKey:(id)key;
-(id)dataDictionaryValueForKey:(id)key;
-(id)dataArrayValueForKey:(id)key;
-(id)arrayValueForKey:(id)key;
-(id)dictionaryValueForKey:(id)key;
-(double)doubleValueForKey:(id)key defValue:(double)value;
-(BOOL)boolValueForKey:(id)key defValue:(BOOL)value;
-(id)booleanValueForKey:(id)key;
-(id)numberValueForKey:(id)key;
-(id)stringValueForKey:(id)key;
-(id)parserValueForKey:(id)key;
-(id)description;
-(id)asDictionary;
-(id)initWithDictionary:(id)dictionary;
@end
