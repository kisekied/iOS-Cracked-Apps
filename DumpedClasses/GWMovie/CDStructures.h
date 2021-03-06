//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AVPacketContext {
    long long _field1;
    long long _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    struct AVRational _field7;
    struct AVRational _field8;
    int _field9;
    int _field10;
    int _field11;
    int _field12;
    char *_field13[3];
    int _field14[3];
    char *_field15;
    unsigned int _field16;
    int _field17;
    int _field18;
    int _field19;
    long long _field20;
    long long _field21;
    int _field22;
    long long _field23;
    unsigned int _field24;
    unsigned int _field25;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field26;
    int _field27;
    long long _field28;
    char _field29;
    int _field30;
    void *_field31;
};

struct AVPacketDataStat {
    long long _field1;
    long long _field2;
    long long _field3;
    long long _field4;
    long long _field5;
    long long _field6;
    int _field7;
    int _field8;
    int _field9;
    int _field10;
    int _field11;
};

struct AVPicture {
    char *_field1[4];
    int _field2[4];
    int _field3;
    int _field4;
    int _field5;
    int _field6;
};

struct AVRational {
    int _field1;
    int _field2;
};

struct AudioQueueBuffer {
    unsigned int _field1;
    void *_field2;
    unsigned int _field3;
    void *_field4;
    unsigned int _field5;
    struct AudioStreamPacketDescription *_field6;
    unsigned int _field7;
};

struct AudioStreamBasicDescription {
    double mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
};

struct AudioStreamPacketDescription {
    long long _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct CATransform3D {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CGVector {
    double _field1;
    double _field2;
};

struct CLLocationCoordinate2D {
    double latitude;
    double longitude;
};

struct CPlayerWrapper {
    CDUnknownFunctionPointerType *_field1;
    struct IPlayerWrapper *_field2;
    id _field3;
    int _field4;
    int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    int _field9;
    CDStruct_183601bc *_field10;
    CDStruct_183601bc *_field11;
    CDStruct_183601bc *_field12;
    char _field13;
    CDStruct_183601bc *_field14;
    int _field15;
    long long _field16;
    long long _field17;
    int _field18;
    char _field19;
    char _field20;
    char _field21;
    char _field22;
    CDStruct_183601bc *_field23;
    int _field24;
    int _field25;
    int _field26;
    int _field27;
    int _field28;
};

struct CStatistic {
    unsigned int _field1;
    unsigned int _field2;
    unsigned short _field3;
    unsigned short _field4;
    unsigned short _field5;
    unsigned short _field6;
    unsigned int _field7;
    unsigned short _field8;
    unsigned char _field9[5120];
};

struct CachedFailedData {
    _Bool wasCachedFailed;
    long long failedCacheOrder;
};

struct DDListNode {
    void *_field1;
    struct DDListNode *_field2;
    struct DDListNode *_field3;
};

struct GifState {
    struct AVPicture _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
    unsigned int *_field8;
    int _field9;
    int _field10;
    char *_field11;
    char *_field12;
    void *_field13;
    unsigned char _field14[768];
    unsigned char _field15[768];
};

struct IPlayerWrapper;

struct JKConstBuffer {
    struct JKConstPtrRange _field1;
};

struct JKConstPtrRange {
    char *_field1;
    unsigned long long _field2;
};

struct JKEncodeCache {
    id _field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct JKEncodeState {
    struct JKManagedBuffer _field1;
    struct JKManagedBuffer _field2;
    unsigned long long _field3;
    struct JKFastClassLookup _field4;
    struct JKEncodeCache _field5[1024];
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    id _field9;
    id _field10;
    SEL _field11;
    CDUnknownFunctionPointerType _field12;
    CDUnknownBlockType _field13;
};

struct JKFastClassLookup {
    void *_field1;
    void *_field2;
    void *_field3;
    void *_field4;
    void *_field5;
};

struct JKHashTableEntry {
    unsigned long long _field1;
    id _field2;
    id _field3;
};

struct JKManagedBuffer {
    struct JKPtrRange _field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct JKObjCImpCache {
    Class _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
};

struct JKObjectStack {
    void **_field1;
    void **_field2;
    unsigned long long *_field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
};

struct JKParseState {
    unsigned long long _field1;
    struct JKConstBuffer _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    struct JKParseToken _field9;
    struct JKObjectStack _field10;
    struct JKTokenCache _field11;
    struct JKObjCImpCache _field12;
    id _field13;
    int _field14;
    _Bool _field15;
};

struct JKParseToken {
    struct JKConstPtrRange _field1;
    unsigned long long _field2;
    struct JKTokenValue _field3;
    struct JKManagedBuffer _field4;
};

struct JKPtrRange {
    char *_field1;
    unsigned long long _field2;
};

struct JKTokenCache {
    struct JKTokenCacheItem *_field1;
    unsigned long long _field2;
    unsigned int _field3;
    unsigned char _field4[1024];
};

struct JKTokenCacheItem;

struct JKTokenValue {
    struct JKConstPtrRange _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    CDUnion_abebb5d1 _field4;
    struct JKTokenCacheItem *_field5;
};

struct NSDictionary {
    Class _field1;
};

struct NSMutableArray {
    Class _field1;
};

struct POPAnimatorItem;

struct QLMovieItem {
    Class _field1;
};

struct QQPlayerNativeContext {
    struct AVPacketContext _field1;
    struct AVPacketDataStat _field2;
    int _field3;
};

struct SSState<POP::Vector4<double>> {
    struct Vector4<double> _field1;
    struct Vector4<double> _field2;
};

struct SpringSolver<POP::Vector4<double>> {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    struct SSState<POP::Vector4<double>> _field8;
    struct Vector4<double> _field9;
    _Bool _field10;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct UIOffset {
    double _field1;
    double _field2;
};

struct UPAFileRef {
    int _field1;
};

struct UPPPasswordUtil;

struct UPPProguardUtil {
    int _field1;
};

struct UPPasswordTool {
    struct UPPProguardUtil *_field1;
    struct UPPPasswordUtil *_field2;
    int _field3;
};

struct VRPointF {
    float _field1;
    float _field2;
};

struct Vector4<double> {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct WBSDKJKConstBuffer {
    struct WBSDKJKConstPtrRange _field1;
};

struct WBSDKJKConstPtrRange {
    char *_field1;
    unsigned long long _field2;
};

struct WBSDKJKEncodeCache {
    id _field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct WBSDKJKEncodeState {
    struct WBSDKJKManagedBuffer _field1;
    struct WBSDKJKManagedBuffer _field2;
    unsigned long long _field3;
    struct WBSDKJKFastClassLookup _field4;
    struct WBSDKJKEncodeCache _field5[1024];
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    id _field9;
    id _field10;
    SEL _field11;
    CDUnknownFunctionPointerType _field12;
    CDUnknownBlockType _field13;
};

struct WBSDKJKFastClassLookup {
    void *_field1;
    void *_field2;
    void *_field3;
    void *_field4;
    void *_field5;
};

struct WBSDKJKHashTableEntry {
    unsigned long long _field1;
    id _field2;
    id _field3;
};

struct WBSDKJKManagedBuffer {
    struct WBSDKJKPtrRange _field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct WBSDKJKObjCImpCache {
    Class _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
};

struct WBSDKJKObjectStack {
    void **_field1;
    void **_field2;
    unsigned long long *_field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
};

struct WBSDKJKParseState {
    unsigned long long _field1;
    struct WBSDKJKConstBuffer _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    struct WBSDKJKParseToken _field9;
    struct WBSDKJKObjectStack _field10;
    struct WBSDKJKTokenCache _field11;
    struct WBSDKJKObjCImpCache _field12;
    id _field13;
    int _field14;
    _Bool _field15;
};

struct WBSDKJKParseToken {
    struct WBSDKJKConstPtrRange _field1;
    unsigned long long _field2;
    struct WBSDKJKTokenValue _field3;
    struct WBSDKJKManagedBuffer _field4;
};

struct WBSDKJKPtrRange {
    char *_field1;
    unsigned long long _field2;
};

struct WBSDKJKTokenCache {
    struct WBSDKJKTokenCacheItem *_field1;
    unsigned long long _field2;
    unsigned int _field3;
    unsigned char _field4[1024];
};

struct WBSDKJKTokenCacheItem;

struct WBSDKJKTokenValue {
    struct WBSDKJKConstPtrRange _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    CDUnion_abebb5d1 _field4;
    struct WBSDKJKTokenCacheItem *_field5;
};

struct WPSeatLocation {
    long long row;
    long long column;
};

struct _CgCond;

struct _CgHttpServer;

struct _CgMutex;

struct _CgNetworkInterface;

struct _CgString;

struct _CgThread;

struct _CgUpnpAction {
    _Bool _field1;
    struct _CgUpnpAction *_field2;
    struct _CgUpnpAction *_field3;
    void *_field4;
    struct _CgXmlNode *_field5;
    struct _CgUpnpArgument *_field6;
    CDUnknownFunctionPointerType _field7;
    struct _CgUpnpStatus *_field8;
    void *_field9;
};

struct _CgUpnpAllowedValuesList;

struct _CgUpnpArgument;

struct _CgUpnpAvProtocolInfo;

struct _CgUpnpAvRenderer {
    struct _CgMutex *_field1;
    struct _CgUpnpDevice *_field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    struct _CgUpnpAvProtocolInfo *_field6;
    void *_field7;
};

struct _CgUpnpAvServer {
    struct _CgMutex *_field1;
    struct _CgUpnpDevice *_field2;
    struct _CgXmlNode *_field3;
    int _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    struct _CgUpnpAvProtocolInfo *_field8;
    struct _CgNetworkInterface *_field9;
    void *_field10;
};

struct _CgUpnpControlPoint {
    struct _CgMutex *_field1;
    struct _CgXmlNode *_field2;
    struct _CgUpnpDevice *_field3;
    struct _CgUpnpSSDPServer *_field4;
    struct _CgUpnpSSDPResponseServer *_field5;
    struct _CgHttpServer *_field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    struct _CgUpnpEventListenerList *_field11;
    int _field12;
    struct _CgString *_field13;
    int _field14;
    int _field15;
    void *_field16;
    struct _CgThread *_field17;
    struct _CgMutex *_field18;
    struct _CgCond *_field19;
    struct _CgNetworkInterface *_field20;
};

struct _CgUpnpDevice {
    _Bool _field1;
    struct _CgUpnpDevice *_field2;
    struct _CgUpnpDevice *_field3;
    struct _CgXmlNode *_field4;
    struct _CgXmlNode *_field5;
    struct _CgUpnpDevice *_field6;
    struct _CgUpnpDevice *_field7;
    struct _CgUpnpService *_field8;
    struct _CgUpnpIcon *_field9;
    struct _CgMutex *_field10;
    struct _CgHttpServer *_field11;
    struct _CgUpnpSSDPServer *_field12;
    struct _CgThread *_field13;
    CDUnknownFunctionPointerType _field14;
    struct _CgString *_field15;
    long long _field16;
    int _field17;
    struct _CgUpnpSSDPPacket *_field18;
    void *_field19;
    struct _CgNetworkInterface *_field20;
};

struct _CgUpnpEventListenerList;

struct _CgUpnpIcon {
    _Bool _field1;
    struct _CgUpnpIcon *_field2;
    struct _CgUpnpIcon *_field3;
    struct _CgXmlNode *_field4;
};

struct _CgUpnpSSDPPacket;

struct _CgUpnpSSDPResponseServer;

struct _CgUpnpSSDPServer;

struct _CgUpnpService {
    _Bool _field1;
    struct _CgUpnpService *_field2;
    struct _CgUpnpService *_field3;
    struct _CgXmlNode *_field4;
    struct _CgXmlNode *_field5;
    struct _CgUpnpAction *_field6;
    struct _CgUpnpStateVariable *_field7;
    void *_field8;
    struct _CgMutex *_field9;
    struct _CgUpnpSubscriber *_field10;
    _Bool _field11;
    struct _CgString *_field12;
    long long _field13;
    void *_field14;
    unsigned int _field15;
    long long _field16;
};

struct _CgUpnpStateVariable {
    _Bool _field1;
    struct _CgUpnpStateVariable *_field2;
    struct _CgUpnpStateVariable *_field3;
    struct _CgUpnpAllowedValuesList *_field4;
    void *_field5;
    struct _CgXmlNode *_field6;
    void *_field7;
    void *_field8;
    struct _CgString *_field9;
    CDUnknownFunctionPointerType _field10;
    struct _CgUpnpStatus *_field11;
    void *_field12;
};

struct _CgUpnpStatus;

struct _CgUpnpSubscriber;

struct _CgXmlAttribute;

struct _CgXmlNode {
    _Bool _field1;
    struct _CgXmlNode *_field2;
    struct _CgXmlNode *_field3;
    struct _CgString *_field4;
    struct _CgString *_field5;
    struct _CgXmlAttribute *_field6;
    struct _CgXmlNode *_field7;
    struct _CgXmlNode *_field8;
    void *_field9;
    CDUnknownFunctionPointerType _field10;
};

struct _DDRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _POPAnimationState {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    int _field3;
    id _field4;
    unsigned long long _field5;
    double _field6;
    double _field7;
    double _field8;
    id _field9;
    CDUnknownBlockType _field10;
    CDUnknownBlockType _field11;
    CDUnknownBlockType _field12;
    CDUnknownBlockType _field13;
    id _field14;
    id _field15;
    double _field16;
    long long _field17;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
};

struct _Rb_tree<std::basic_string<char>, std::pair<const std::basic_string<char>, id>, std::_Select1st<std::pair<const std::basic_string<char>, id>>, std::less<std::basic_string<char>>, std::allocator<std::pair<const std::basic_string<char>, id>>> {
    struct _Rb_tree_impl<std::less<std::basic_string<char>>, false> _field1;
};

struct _Rb_tree_impl<std::less<std::basic_string<char>>, false> {
    struct less<std::basic_string<char>> _field1;
    struct _Rb_tree_node_base _field2;
    unsigned long long _field3;
};

struct _Rb_tree_node_base {
    int _field1;
    struct _Rb_tree_node_base *_field2;
    struct _Rb_tree_node_base *_field3;
    struct _Rb_tree_node_base *_field4;
};

struct _RecoverConfig {
    unsigned int _field1;
    _Bool _field2;
    unsigned int _field3;
    unsigned int _field4;
    _Bool _field5;
};

struct _TBXMLAttribute {
    char *_field1;
    char *_field2;
    struct _TBXMLAttribute *_field3;
};

struct _TBXMLAttributeBuffer {
    struct _TBXMLAttribute *_field1;
    struct _TBXMLAttributeBuffer *_field2;
    struct _TBXMLAttributeBuffer *_field3;
};

struct _TBXMLElement {
    char *name;
    char *text;
    struct _TBXMLAttribute *firstAttribute;
    struct _TBXMLElement *parentElement;
    struct _TBXMLElement *firstChild;
    struct _TBXMLElement *currentChild;
    struct _TBXMLElement *nextSibling;
    struct _TBXMLElement *previousSibling;
};

struct _TBXMLElementBuffer {
    struct _TBXMLElement *_field1;
    struct _TBXMLElementBuffer *_field2;
    struct _TBXMLElementBuffer *_field3;
};

struct __CFString;

struct __list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> {
    struct __list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> *__prev_;
    struct __list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> *__next_;
};

struct _opaque_pthread_rwlock_t {
    long long __sig;
    char __opaque[192];
};

struct _utils {
    CDUnknownFunctionPointerType _field1;
};

struct _xmlAttr {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlAttr *_field7;
    struct _xmlAttr *_field8;
    struct _xmlDoc *_field9;
    struct _xmlNs *_field10;
    int _field11;
    void *_field12;
};

struct _xmlDict;

struct _xmlDoc {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlNode *_field7;
    struct _xmlNode *_field8;
    struct _xmlDoc *_field9;
    int _field10;
    int _field11;
    struct _xmlDtd *_field12;
    struct _xmlDtd *_field13;
    struct _xmlNs *_field14;
    char *_field15;
    char *_field16;
    void *_field17;
    void *_field18;
    char *_field19;
    int _field20;
    struct _xmlDict *_field21;
    void *_field22;
    int _field23;
    int _field24;
};

struct _xmlDtd;

struct _xmlHashTable;

struct _xmlKind {
    void *_field1;
    int _field2;
};

struct _xmlNode {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlNode *_field7;
    struct _xmlNode *_field8;
    struct _xmlDoc *_field9;
    struct _xmlNs *_field10;
    char *_field11;
    struct _xmlAttr *_field12;
    struct _xmlNs *_field13;
    void *_field14;
    unsigned short _field15;
    unsigned short _field16;
};

struct _xmlNs {
    struct _xmlNs *_field1;
    int _field2;
    char *_field3;
    char *_field4;
    void *_field5;
    struct _xmlDoc *_field6;
};

struct _xmlParserCtxt {
    struct _xmlSAXHandler *_field1;
    void *_field2;
    struct _xmlDoc *_field3;
    int _field4;
    int _field5;
    char *_field6;
    char *_field7;
    int _field8;
    int _field9;
    struct _xmlParserInput *_field10;
    int _field11;
    int _field12;
    struct _xmlParserInput **_field13;
    struct _xmlNode *_field14;
    int _field15;
    int _field16;
    struct _xmlNode **_field17;
    int _field18;
    struct _xmlParserNodeInfoSeq {
        unsigned long long _field1;
        unsigned long long _field2;
        struct _xmlParserNodeInfo *_field3;
    } _field19;
    int _field20;
    int _field21;
    int _field22;
    int _field23;
    int _field24;
    int _field25;
    struct _xmlValidCtxt {
        void *_field1;
        CDUnknownFunctionPointerType _field2;
        CDUnknownFunctionPointerType _field3;
        struct _xmlNode *_field4;
        int _field5;
        int _field6;
        struct _xmlNode **_field7;
        unsigned int _field8;
        struct _xmlDoc *_field9;
        int _field10;
        struct _xmlValidState *_field11;
        int _field12;
        int _field13;
        struct _xmlValidState *_field14;
        struct _xmlAutomata *_field15;
        struct _xmlAutomataState *_field16;
    } _field26;
    int _field27;
    int _field28;
    char *_field29;
    char *_field30;
    int _field31;
    int _field32;
    char **_field33;
    long long _field34;
    long long _field35;
    int _field36;
    int _field37;
    int _field38;
    char *_field39;
    char *_field40;
    char *_field41;
    int *_field42;
    int _field43;
    int _field44;
    int *_field45;
    int _field46;
    struct _xmlParserInput *_field47;
    int _field48;
    int _field49;
    int _field50;
    int _field51;
    void *_field52;
    int _field53;
    int _field54;
    void *_field55;
    int _field56;
    int _field57;
    struct _xmlDict *_field58;
    char **_field59;
    int _field60;
    int _field61;
    char *_field62;
    char *_field63;
    char *_field64;
    int _field65;
    int _field66;
    int _field67;
    char **_field68;
    int *_field69;
    void **_field70;
    struct _xmlHashTable *_field71;
    struct _xmlHashTable *_field72;
    int _field73;
    int _field74;
    int _field75;
    int _field76;
    struct _xmlNode *_field77;
    int _field78;
    struct _xmlAttr *_field79;
    struct _xmlError {
        int _field1;
        int _field2;
        char *_field3;
        int _field4;
        char *_field5;
        int _field6;
        char *_field7;
        char *_field8;
        char *_field9;
        int _field10;
        int _field11;
        void *_field12;
        void *_field13;
    } _field80;
    int _field81;
    unsigned long long _field82;
    unsigned long long _field83;
    struct _xmlParserNodeInfo *_field84;
    int _field85;
    int _field86;
    struct _xmlParserNodeInfo *_field87;
    int _field88;
    unsigned long long _field89;
};

struct _xmlParserInput;

struct _xmlParserNodeInfo;

struct _xmlSAXHandler {
    CDUnknownFunctionPointerType internalSubset;
    CDUnknownFunctionPointerType isStandalone;
    CDUnknownFunctionPointerType hasInternalSubset;
    CDUnknownFunctionPointerType hasExternalSubset;
    CDUnknownFunctionPointerType resolveEntity;
    CDUnknownFunctionPointerType getEntity;
    CDUnknownFunctionPointerType entityDecl;
    CDUnknownFunctionPointerType notationDecl;
    CDUnknownFunctionPointerType attributeDecl;
    CDUnknownFunctionPointerType elementDecl;
    CDUnknownFunctionPointerType unparsedEntityDecl;
    CDUnknownFunctionPointerType setDocumentLocator;
    CDUnknownFunctionPointerType startDocument;
    CDUnknownFunctionPointerType endDocument;
    CDUnknownFunctionPointerType startElement;
    CDUnknownFunctionPointerType endElement;
    CDUnknownFunctionPointerType reference;
    CDUnknownFunctionPointerType characters;
    CDUnknownFunctionPointerType ignorableWhitespace;
    CDUnknownFunctionPointerType processingInstruction;
    CDUnknownFunctionPointerType comment;
    CDUnknownFunctionPointerType warning;
    CDUnknownFunctionPointerType error;
    CDUnknownFunctionPointerType fatalError;
    CDUnknownFunctionPointerType getParameterEntity;
    CDUnknownFunctionPointerType cdataBlock;
    CDUnknownFunctionPointerType externalSubset;
    unsigned int initialized;
    void *_private;
    CDUnknownFunctionPointerType startElementNs;
    CDUnknownFunctionPointerType endElementNs;
    CDUnknownFunctionPointerType serror;
};

struct _xmlStd {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlStd *_field7;
    struct _xmlStd *_field8;
    struct _xmlDoc *_field9;
};

struct _xmlValidState;

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    char *_field1;
                    unsigned long long _field2;
                    unsigned long long _field3;
                } _field1;
                struct __short {
                    char _field1[23];
                    struct {
                        unsigned char _field1;
                    } _field2;
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct bignum_st;

struct bn_blinding_st;

struct bn_mont_ctx_st;

struct crypto_ex_data_st {
    struct stack_st_void *_field1;
    int _field2;
};

struct engine_st;

struct in6_addr {
    union {
        unsigned char _field1[16];
        unsigned short _field2[8];
        unsigned int _field3[4];
    } _field1;
};

struct in_addr {
    unsigned int _field1;
};

struct internal_state;

struct less<std::basic_string<char>>;

struct list<std::__1::shared_ptr<POPAnimatorItem>, std::__1::allocator<std::__1::shared_ptr<POPAnimatorItem>>> {
    struct __list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> __end_;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<POPAnimatorItem>, void *>>> {
        unsigned long long __first_;
    } __size_alloc_;
};

struct map<std::basic_string<char>, id, std::less<std::basic_string<char>>, std::allocator<std::pair<const std::basic_string<char>, id>>> {
    struct _Rb_tree<std::basic_string<char>, std::pair<const std::basic_string<char>, id>, std::_Select1st<std::pair<const std::basic_string<char>, id>>, std::less<std::basic_string<char>>, std::allocator<std::pair<const std::basic_string<char>, id>>> _field1;
};

struct msgpack_object {
    int _field1;
    union {
        _Bool _field1;
        unsigned long long _field2;
        long long _field3;
        double _field4;
        struct {
            unsigned int _field1;
            struct msgpack_object *_field2;
        } _field5;
        struct {
            unsigned int _field1;
            struct msgpack_object_kv *_field2;
        } _field6;
        struct {
            unsigned int _field1;
            char *_field2;
        } _field7;
    } _field2;
};

struct msgpack_object_kv;

struct msgpack_packer {
    void *_field1;
    CDUnknownFunctionPointerType _field2;
};

struct rsa_meth_st;

struct rsa_st {
    int _field1;
    long long _field2;
    struct rsa_meth_st *_field3;
    struct engine_st *_field4;
    struct bignum_st *_field5;
    struct bignum_st *_field6;
    struct bignum_st *_field7;
    struct bignum_st *_field8;
    struct bignum_st *_field9;
    struct bignum_st *_field10;
    struct bignum_st *_field11;
    struct bignum_st *_field12;
    struct crypto_ex_data_st _field13;
    int _field14;
    int _field15;
    struct bn_mont_ctx_st *_field16;
    struct bn_mont_ctx_st *_field17;
    struct bn_mont_ctx_st *_field18;
    char *_field19;
    struct bn_blinding_st *_field20;
    struct bn_blinding_st *_field21;
};

struct shared_ptr<POPAnimatorItem> {
    struct POPAnimatorItem *_field1;
    struct __shared_weak_count *_field2;
};

struct sockaddr {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[14];
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct sockaddr_in6 {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned int _field4;
    struct in6_addr _field5;
    unsigned int _field6;
};

struct sockaddr_un {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[104];
};

struct stack_st_void;

struct timeval {
    long long tv_sec;
    int tv_usec;
};

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
    long long tm_gmtoff;
    char *tm_zone;
};

struct uregex;

struct z_stream_s {
    char *next_in;
    unsigned int avail_in;
    unsigned long long total_in;
    char *next_out;
    unsigned int avail_out;
    unsigned long long total_out;
    char *msg;
    struct internal_state *state;
    CDUnknownFunctionPointerType zalloc;
    CDUnknownFunctionPointerType zfree;
    void *opaque;
    int data_type;
    unsigned long long adler;
    unsigned long long reserved;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
} CDStruct_a06f635e;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
} CDStruct_7523a67d;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    char *_field1;
    int _field2;
    int _field3;
    char *_field4;
    int _field5;
} CDStruct_d8f43467;

typedef struct {
    void *_field1;
    unsigned long long _field2;
} CDStruct_6c7289c3;

typedef struct {
    int used;
    int alloc;
    int sign;
    unsigned long long *dp;
} CDStruct_c40cccb6;

typedef struct {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
    int _field8;
    int _field9;
    int _field10;
    int _field11;
    float _field12;
} CDStruct_81056ce5;

typedef struct {
    int _field1;
    int _field2;
} CDStruct_1ef3fb1f;

typedef struct {
    long long version;
    void *info;
    CDUnknownFunctionPointerType retain;
    CDUnknownFunctionPointerType release;
    CDUnknownFunctionPointerType copyDescription;
} CDStruct_4210025a;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    long long _field1;
    long long _field2;
    long long _field3;
} CDStruct_2ec95fd7;

typedef struct {
    long long location;
    long long length;
} CDStruct_627e0f85;

typedef struct CDStruct_183601bc;

typedef struct {
    struct {
        double x;
        double y;
    } origin;
    struct {
        double width;
        double height;
    } size;
} CDStruct_02837cd9;

typedef struct {
    struct CLLocationCoordinate2D center;
    struct {
        double latitudeDelta;
        double longitudeDelta;
    } span;
} CDStruct_b7cb895d;

// Ambiguous groups
typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    double latitude;
    double longitude;
} CDStruct_2c43369c;

typedef struct SpringSolver<POP::Vector4<double>> {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    struct SSState<POP::Vector4<double>> _field8;
    struct Vector4<double> _field9;
    _Bool _field10;
} SpringSolver_fe820e75;

typedef struct list<std::__1::shared_ptr<POPAnimatorItem>, std::__1::allocator<std::__1::shared_ptr<POPAnimatorItem>>> {
    struct __list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> __end_;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<POPAnimatorItem>, void *>>> {
        unsigned long long __first_;
    } __size_alloc_;
} list_670f5810;

typedef struct map<std::basic_string<char>, id, std::less<std::basic_string<char>>, std::allocator<std::pair<const std::basic_string<char>, id>>> {
    struct _Rb_tree<std::basic_string<char>, std::pair<const std::basic_string<char>, id>, std::_Select1st<std::pair<const std::basic_string<char>, id>>, std::less<std::basic_string<char>>, std::allocator<std::pair<const std::basic_string<char>, id>>> _field1;
} map_787bb2be;

typedef struct shared_ptr<POPAnimatorItem> {
    struct POPAnimatorItem *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_1553c9f8;

#pragma mark Typedef'd Unions

typedef union {
    long long _field1;
    unsigned long long _field2;
    double _field3;
} CDUnion_abebb5d1;

