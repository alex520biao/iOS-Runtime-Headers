/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString;

@interface NSAttributeDescription : NSPropertyDescription {
    struct __attributeDescriptionFlags { 
        unsigned int _hasMaxValueInExtraIvars : 1; 
        unsigned int _hasMinValueInExtraIvars : 1; 
        unsigned int _storeBinaryDataExternally : 1; 
        unsigned int _reservedAttributeDescription : 29; 
    } _attributeDescriptionFlags;
    Class _attributeValueClass;
    NSString *_attributeValueClassName;
    id _defaultValue;
    unsigned int _type;
    NSString *_valueTransformerName;
}

+ (id)_classNameForType:(unsigned int)arg1;
+ (void)initialize;

- (Class)_attributeValueClass;
- (int)_canConvertPredicate:(id)arg1 andWarning:(id)arg2;
- (BOOL)_comparePredicatesAndWarnings:(id)arg1;
- (BOOL)_comparePredicatesAndWarningsWithUnoptimizedAttributeDescription:(id)arg1;
- (void)_createCachesAndOptimizeState;
- (id)_initWithName:(id)arg1 type:(unsigned int)arg2 withClassName:(id)arg3;
- (id)_initWithName:(id)arg1 type:(unsigned int)arg2;
- (id)_initWithType:(unsigned int)arg1;
- (BOOL)_nonPredicateValidateValue:(id*)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id*)arg4;
- (unsigned int)_propertyType;
- (id)_rawValidationPredicates;
- (id)_rawValidationWarnings;
- (void)_versionHash:(char *)arg1 inStyle:(unsigned int)arg2;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7;
- (BOOL)allowsExternalBinaryDataStorage;
- (unsigned int)attributeType;
- (id)attributeValueClassName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)defaultValue;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isIndexed;
- (void)setAllowsExternalBinaryDataStorage:(BOOL)arg1;
- (void)setAttributeType:(unsigned int)arg1;
- (void)setAttributeValueClassName:(id)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setStoresBinaryDataExternally:(BOOL)arg1;
- (void)setValueTransformerName:(id)arg1;
- (BOOL)storesBinaryDataExternally;
- (id)validationPredicates;
- (id)validationWarnings;
- (id)valueTransformerName;
- (id)versionHash;

@end
