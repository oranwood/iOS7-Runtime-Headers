/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <WebInspectorClientRegistryDelegate>;

@interface WebInspectorClientRegistry : NSObject  {
    unsigned int _nextAvailablePageId;
    struct HashMap<unsigned int, WebInspectorClient *, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WebInspectorClient *> > { 
        struct HashTable<unsigned int, WTF::KeyValuePair<unsigned int, WebInspectorClient *>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned int, WebInspectorClient *> >, WTF::IntHash<unsigned int>, WTF::HashMapValueTraits<WTF::HashTraits<unsigned int>, WTF::HashTraits<WebInspectorClient *> >, WTF::HashTraits<unsigned int> > { 
            struct KeyValuePair<unsigned int, WebInspectorClient *> {} *m_table; 
            int m_tableSize; 
            int m_tableSizeMask; 
            int m_keyCount; 
            int m_deletedCount; 
        } m_impl; 
    } _pageClientMap;
    <WebInspectorClientRegistryDelegate> *_delegate;
}

@property <WebInspectorClientRegistryDelegate> * delegate;

+ (id)sharedRegistry;

- (id)inspectableWebViews;
- (struct WebInspectorClient { int (**x1)(); int (**x2)(); id x3; struct RetainPtr<WebNodeHighlighter> { struct WebNodeHighlighter { } *x_4_1_1; } x4; struct Page {} *x5; struct RetainPtr<WebInspectorWindowController> { struct WebInspectorWindowController { } *x_6_1_1; } x6; int x7; id x8; struct WebInspectorFrontendClient {} *x9; }*)clientForPageId:(unsigned int)arg1;
- (unsigned int)_getNextAvailablePageId;
- (void)unregisterClient:(struct WebInspectorClient { int (**x1)(); int (**x2)(); id x3; struct RetainPtr<WebNodeHighlighter> { struct WebNodeHighlighter { } *x_4_1_1; } x4; struct Page {} *x5; struct RetainPtr<WebInspectorWindowController> { struct WebInspectorWindowController { } *x_6_1_1; } x6; int x7; id x8; struct WebInspectorFrontendClient {} *x9; }*)arg1;
- (void)registerClient:(struct WebInspectorClient { int (**x1)(); int (**x2)(); id x3; struct RetainPtr<WebNodeHighlighter> { struct WebNodeHighlighter { } *x_4_1_1; } x4; struct Page {} *x5; struct RetainPtr<WebInspectorWindowController> { struct WebInspectorWindowController { } *x_6_1_1; } x6; int x7; id x8; struct WebInspectorFrontendClient {} *x9; }*)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)delegate;

@end
