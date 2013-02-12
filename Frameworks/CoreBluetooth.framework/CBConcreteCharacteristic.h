/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class CBConcretePeripheral, NSNumber;

@interface CBConcreteCharacteristic : CBCharacteristic {
    NSNumber *_handle;
    CBConcretePeripheral *_peripheral;
    NSNumber *_valueHandle;
}

@property(readonly) NSNumber * handle;
@property(readonly) CBConcretePeripheral * peripheral;
@property(readonly) NSNumber * valueHandle;

- (void)dealloc;
- (id)handle;
- (id)handleDescriptorsDiscovered:(id)arg1;
- (id)handleValueBroadcasted:(id)arg1;
- (id)handleValueNotifying:(id)arg1;
- (id)handleValueUpdated:(id)arg1;
- (id)handleValueWritten:(id)arg1;
- (id)initWithService:(id)arg1 UUID:(id)arg2 properties:(int)arg3 peripheral:(id)arg4 handle:(id)arg5 valueHandle:(id)arg6;
- (void)invalidate;
- (id)peripheral;
- (id)valueHandle;

@end
