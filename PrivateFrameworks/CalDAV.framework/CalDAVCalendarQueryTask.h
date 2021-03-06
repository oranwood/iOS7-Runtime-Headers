/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSDateComponents;

@interface CalDAVCalendarQueryTask : CoreDAVPropFindTask  {
    BOOL _syncEvents;
    BOOL _syncTodos;
    NSDateComponents *_eventFilterStartDate;
    NSDateComponents *_eventFilterEndDate;
    NSDateComponents *_todoFilterStartDate;
    NSDateComponents *_todoFilterEndDate;
}

@property BOOL syncEvents;
@property BOOL syncTodos;
@property(retain) NSDateComponents * eventFilterStartDate;
@property(retain) NSDateComponents * eventFilterEndDate;
@property(retain) NSDateComponents * todoFilterStartDate;
@property(retain) NSDateComponents * todoFilterEndDate;


- (void)_appendComponentFiltersToXMLData:(id)arg1;
- (void)_appendTimeRangeFilterToXMLData:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)_icsDateStringForNSDateComponents:(id)arg1;
- (void)setTodoFilterEndDate:(id)arg1;
- (void)setTodoFilterStartDate:(id)arg1;
- (void)setEventFilterEndDate:(id)arg1;
- (void)setEventFilterStartDate:(id)arg1;
- (id)todoFilterEndDate;
- (id)todoFilterStartDate;
- (id)eventFilterEndDate;
- (id)eventFilterStartDate;
- (BOOL)syncEvents;
- (BOOL)syncTodos;
- (void)setSyncTodos:(BOOL)arg1;
- (void)setSyncEvents:(BOOL)arg1;
- (id)requestBody;
- (id)httpMethod;
- (void)dealloc;
- (id)description;

@end
