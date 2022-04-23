#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SSSConfigModel, SSSConfigTable, SSSRuntimeQuery<__covariant RowType>, SSSEventModel, SSSEventTable, SSSIOSSSApiCompanion, SSSSSUserApi, SSSIOSSSApi, SSSSuprSendDatabaseCompanion, SSSConfigTableAdapter, SSSEventTableAdapter, SSSConfigModelCompanion, SSSKotlinEnumCompanion, SSSKotlinEnum<E>, SSSLogLevel, SSSKotlinArray<T>, SSSKotlinThrowable, SSSNetworkType, SSSEventFlushHandler, SSSKotlinUnit, SSSKotlinx_serialization_jsonJsonElement, SSSEventModelCompanion, SSSPayloadCreator, SSSKotlinx_serialization_jsonJsonElementCompanion, SSSKotlinx_serialization_jsonJsonPrimitive, SSSKotlinx_coroutines_coreCoroutineDispatcher, SSSRuntimeTransacterTransaction, SSSKotlinException, SSSKotlinRuntimeException, SSSKotlinIllegalStateException, SSSKotlinx_serialization_jsonJsonPrimitiveCompanion, SSSKotlinAbstractCoroutineContextElement, SSSKotlinx_coroutines_coreCoroutineDispatcherKey, SSSKtor_client_coreHttpRequestData, SSSKtor_client_coreHttpResponseData, SSSKtor_client_coreHttpClient, SSSKtor_client_coreHttpClientEngineConfig, SSSKotlinByteArray, SSSKotlinx_serialization_coreSerializersModule, SSSKotlinx_serialization_coreSerialKind, SSSKotlinNothing, SSSKotlinAbstractCoroutineContextKey<B, E>, SSSKtor_httpUrl, SSSKtor_httpHttpMethod, SSSKtor_httpOutgoingContent, SSSKtor_httpHttpStatusCode, SSSKtor_utilsGMTDate, SSSKtor_httpHttpProtocolVersion, SSSKtor_client_coreHttpClientConfig<T>, SSSKtor_eventsEvents, SSSKtor_client_coreHttpReceivePipeline, SSSKtor_client_coreHttpRequestPipeline, SSSKtor_client_coreHttpResponsePipeline, SSSKtor_client_coreHttpSendPipeline, SSSKtor_client_coreProxyConfig, SSSKotlinByteIterator, SSSKtor_httpUrlCompanion, SSSKtor_httpURLProtocol, SSSKtor_httpHttpMethodCompanion, SSSKtor_utilsAttributeKey<T>, SSSKtor_httpContentType, SSSKotlinCancellationException, SSSKtor_httpHttpStatusCodeCompanion, SSSKtor_utilsGMTDateCompanion, SSSKtor_utilsWeekDay, SSSKtor_utilsMonth, SSSKtor_httpHttpProtocolVersionCompanion, SSSKtor_eventsEventDefinition<T>, SSSKtor_utilsPipelinePhase, SSSKtor_utilsPipeline<TSubject, TContext>, SSSKtor_client_coreHttpReceivePipelinePhases, SSSKtor_client_coreHttpResponse, SSSKtor_client_coreHttpRequestPipelinePhases, SSSKtor_client_coreHttpRequestBuilder, SSSKtor_client_coreHttpResponsePipelinePhases, SSSKtor_client_coreHttpResponseContainer, SSSKtor_client_coreHttpClientCall, SSSKtor_client_coreHttpSendPipelinePhases, SSSKtor_httpURLProtocolCompanion, SSSKtor_httpHeaderValueParam, SSSKtor_httpHeaderValueWithParametersCompanion, SSSKtor_httpHeaderValueWithParameters, SSSKtor_httpContentTypeCompanion, SSSKtor_utilsWeekDayCompanion, SSSKtor_utilsMonthCompanion, SSSKtor_httpHeadersBuilder, SSSKtor_client_coreHttpRequestBuilderCompanion, SSSKtor_httpURLBuilder, SSSKtor_utilsTypeInfo, SSSKtor_client_coreHttpClientCallCompanion, SSSKotlinx_coroutines_coreAtomicDesc, SSSKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, SSSKtor_ioMemory, SSSKtor_ioChunkBuffer, SSSKtor_ioBuffer, SSSKtor_ioByteReadPacket, SSSKtor_utilsStringValuesBuilderImpl, SSSKtor_httpURLBuilderCompanion, SSSKotlinx_coroutines_coreAtomicOp<__contravariant T>, SSSKotlinx_coroutines_coreOpDescriptor, SSSKotlinx_coroutines_coreLockFreeLinkedListNode, SSSKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, SSSKtor_ioMemoryCompanion, SSSKtor_ioBufferCompanion, SSSKtor_ioChunkBufferCompanion, SSSKtor_ioInputCompanion, SSSKtor_ioInput, SSSKtor_ioByteReadPacketCompanion, SSSKotlinKTypeProjection, SSSKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, SSSKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>, SSSKotlinKVariance, SSSKotlinKTypeProjectionCompanion;

@protocol SSSRuntimeColumnAdapter, SSSRuntimeTransactionWithoutReturn, SSSRuntimeTransactionWithReturn, SSSRuntimeTransacter, SSSMutationHandler, SSSConfigTableQueries, SSSEventTableQueries, SSSSuprSendDatabase, SSSRuntimeSqlDriver, SSSRuntimeSqlDriverSchema, SSSKotlinx_serialization_coreKSerializer, SSSKotlinComparable, SSSKtor_client_coreHttpClientEngine, SSSRuntimeSqlCursor, SSSRuntimeQueryListener, SSSRuntimeTransactionCallbacks, SSSRuntimeSqlPreparedStatement, SSSRuntimeCloseable, SSSKotlinx_serialization_coreEncoder, SSSKotlinx_serialization_coreSerialDescriptor, SSSKotlinx_serialization_coreSerializationStrategy, SSSKotlinx_serialization_coreDecoder, SSSKotlinx_serialization_coreDeserializationStrategy, SSSKotlinIterator, SSSKotlinCoroutineContextKey, SSSKotlinCoroutineContextElement, SSSKotlinCoroutineContext, SSSKotlinContinuation, SSSKotlinContinuationInterceptor, SSSKotlinx_coroutines_coreRunnable, SSSKtor_client_coreHttpClientEngineCapability, SSSKotlinx_coroutines_coreCoroutineScope, SSSKtor_ioCloseable, SSSKotlinx_serialization_coreCompositeEncoder, SSSKotlinAnnotation, SSSKotlinx_serialization_coreCompositeDecoder, SSSKtor_httpHeaders, SSSKotlinx_coroutines_coreJob, SSSKtor_utilsAttributes, SSSKotlinx_serialization_coreSerializersModuleCollector, SSSKotlinKClass, SSSKtor_httpParameters, SSSKotlinMapEntry, SSSKtor_utilsStringValues, SSSKotlinx_coroutines_coreChildHandle, SSSKotlinx_coroutines_coreChildJob, SSSKotlinx_coroutines_coreDisposableHandle, SSSKotlinSequence, SSSKotlinx_coroutines_coreSelectClause0, SSSKtor_client_coreHttpClientPlugin, SSSKotlinSuspendFunction2, SSSKotlinKDeclarationContainer, SSSKotlinKAnnotatedElement, SSSKotlinKClassifier, SSSKotlinx_coroutines_coreParentJob, SSSKotlinx_coroutines_coreSelectInstance, SSSKotlinSuspendFunction0, SSSKotlinFunction, SSSKtor_httpHttpMessage, SSSKtor_ioByteReadChannel, SSSKtor_httpHttpMessageBuilder, SSSKtor_client_coreHttpRequest, SSSKtor_ioReadSession, SSSKotlinSuspendFunction1, SSSKotlinAppendable, SSSKtor_utilsStringValuesBuilder, SSSKtor_httpParametersBuilder, SSSKotlinKType, SSSKtor_ioObjectPool;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SSSBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface SSSBase (SSSBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface SSSMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SSSMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorSSSKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface SSSNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface SSSByte : SSSNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface SSSUByte : SSSNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface SSSShort : SSSNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface SSSUShort : SSSNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface SSSInt : SSSNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface SSSUInt : SSSNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface SSSLong : SSSNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface SSSULong : SSSNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface SSSFloat : SSSNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface SSSDouble : SSSNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface SSSBoolean : SSSNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigTable")))
@interface SSSConfigTable : SSSBase
- (instancetype)initWithKey:(NSString *)key value_:(SSSConfigModel *)value_ __attribute__((swift_name("init(key:value_:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SSSConfigModel *)component2 __attribute__((swift_name("component2()")));
- (SSSConfigTable *)doCopyKey:(NSString *)key value_:(SSSConfigModel *)value_ __attribute__((swift_name("doCopy(key:value_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) SSSConfigModel *value_ __attribute__((swift_name("value_")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigTable.Adapter")))
@interface SSSConfigTableAdapter : SSSBase
- (instancetype)initWithValue_Adapter:(id<SSSRuntimeColumnAdapter>)value_Adapter __attribute__((swift_name("init(value_Adapter:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<SSSRuntimeColumnAdapter> value_Adapter __attribute__((swift_name("value_Adapter")));
@end;

__attribute__((swift_name("RuntimeTransacter")))
@protocol SSSRuntimeTransacter
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<SSSRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<SSSRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end;

__attribute__((swift_name("ConfigTableQueries")))
@protocol SSSConfigTableQueries <SSSRuntimeTransacter>
@required
- (SSSRuntimeQuery<SSSConfigTable *> *)getKey:(NSString *)key __attribute__((swift_name("get(key:)")));
- (SSSRuntimeQuery<id> *)getKey:(NSString *)key mapper:(id (^)(NSString *, SSSConfigModel *))mapper __attribute__((swift_name("get(key:mapper:)")));
- (void)insertKey:(NSString *)key value_:(SSSConfigModel *)value_ __attribute__((swift_name("insert(key:value_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventTable")))
@interface SSSEventTable : SSSBase
- (instancetype)initWithId:(NSString *)id model:(SSSEventModel * _Nullable)model isDirty:(int64_t)isDirty timeStamp:(int64_t)timeStamp __attribute__((swift_name("init(id:model:isDirty:timeStamp:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SSSEventModel * _Nullable)component2 __attribute__((swift_name("component2()")));
- (int64_t)component3 __attribute__((swift_name("component3()")));
- (int64_t)component4 __attribute__((swift_name("component4()")));
- (SSSEventTable *)doCopyId:(NSString *)id model:(SSSEventModel * _Nullable)model isDirty:(int64_t)isDirty timeStamp:(int64_t)timeStamp __attribute__((swift_name("doCopy(id:model:isDirty:timeStamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) int64_t isDirty __attribute__((swift_name("isDirty")));
@property (readonly) SSSEventModel * _Nullable model __attribute__((swift_name("model")));
@property (readonly) int64_t timeStamp __attribute__((swift_name("timeStamp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventTable.Adapter")))
@interface SSSEventTableAdapter : SSSBase
- (instancetype)initWithModelAdapter:(id<SSSRuntimeColumnAdapter>)modelAdapter __attribute__((swift_name("init(modelAdapter:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<SSSRuntimeColumnAdapter> modelAdapter __attribute__((swift_name("modelAdapter")));
@end;

__attribute__((swift_name("EventTableQueries")))
@protocol SSSEventTableQueries <SSSRuntimeTransacter>
@required
- (void)deleteId:(id)id __attribute__((swift_name("delete(id:)")));
- (SSSRuntimeQuery<SSSEventTable *> *)getTrackedEventsIsDirty:(int64_t)isDirty limit:(int64_t)limit __attribute__((swift_name("getTrackedEvents(isDirty:limit:)")));
- (SSSRuntimeQuery<id> *)getTrackedEventsIsDirty:(int64_t)isDirty limit:(int64_t)limit mapper:(id (^)(NSString *, SSSEventModel * _Nullable, SSSLong *, SSSLong *))mapper __attribute__((swift_name("getTrackedEvents(isDirty:limit:mapper:)")));
- (void)trackId:(NSString *)id model:(SSSEventModel * _Nullable)model isDirty:(int64_t)isDirty timeStamp:(int64_t)timeStamp __attribute__((swift_name("track(id:model:isDirty:timeStamp:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface SSSGreeting : SSSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greeting __attribute__((swift_name("greeting()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSSSApi")))
@interface SSSIOSSSApi : SSSBase
@property (class, readonly, getter=companion) SSSIOSSSApiCompanion *companion __attribute__((swift_name("companion")));
- (void)flush __attribute__((swift_name("flush()")));
- (SSSSSUserApi *)getUser __attribute__((swift_name("getUser()")));
- (void)identifyUniqueId:(NSString *)uniqueId __attribute__((swift_name("identify(uniqueId:)")));
- (void)purchaseMadeProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("purchaseMade(properties:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)setSuperPropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("setSuperProperties(properties:)")));
- (void)setSuperPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setSuperProperty(key:value:)")));
- (void)trackEventName:(NSString *)eventName __attribute__((swift_name("track(eventName:)")));
- (void)trackEventName:(NSString *)eventName properties:(NSDictionary<NSString *, id> * _Nullable)properties __attribute__((swift_name("track(eventName:properties:)")));
- (void)unSetSuperPropertyKey:(NSString *)key __attribute__((swift_name("unSetSuperProperty(key:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSSSApi.Companion")))
@interface SSSIOSSSApiCompanion : SSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSSIOSSSApiCompanion *shared __attribute__((swift_name("shared")));
- (void)enableLogging __attribute__((swift_name("enableLogging()")));
- (SSSIOSSSApi *)getInstanceApiKey:(NSString *)apiKey apiSecret:(NSString *)apiSecret apiBaseUrl:(NSString * _Nullable)apiBaseUrl mutationHandler:(id<SSSMutationHandler>)mutationHandler __attribute__((swift_name("getInstance(apiKey:apiSecret:apiBaseUrl:mutationHandler:)")));
- (SSSIOSSSApi * _Nullable)getInstanceFromCachedApiKeyMutationHandler:(id<SSSMutationHandler>)mutationHandler __attribute__((swift_name("getInstanceFromCachedApiKey(mutationHandler:)")));
- (void)initialize __attribute__((swift_name("initialize()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Information")))
@interface SSSInformation : SSSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)getDefaultProperties __attribute__((swift_name("getDefaultProperties()")));
@end;

__attribute__((swift_name("MutationHandler")))
@protocol SSSMutationHandler
@required
- (BOOL)isFlushing __attribute__((swift_name("isFlushing()")));
- (void)setFlushingValue:(BOOL)value __attribute__((swift_name("setFlushing(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface SSSPlatform : SSSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SSUserApi")))
@interface SSSSSUserApi : SSSBase
- (instancetype)initWithMutationHandler:(id<SSSMutationHandler>)mutationHandler __attribute__((swift_name("init(mutationHandler:)"))) __attribute__((objc_designated_initializer));
- (void)appendKey:(NSString *)key value:(id)value __attribute__((swift_name("append(key:value:)")));
- (void)incrementKey:(NSString *)key value:(id)value __attribute__((swift_name("increment(key:value:)")));
- (void)incrementProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("increment(properties:)")));
- (void)removeKey:(NSString *)key value:(id)value __attribute__((swift_name("remove(key:value:)")));
- (void)setKey:(NSString *)key value:(id)value __attribute__((swift_name("set(key:value:)")));
- (void)setProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("set(properties:)")));
- (void)setEmailEmail:(NSString *)email __attribute__((swift_name("setEmail(email:)")));
- (void)setIOSPushToken:(NSString *)token __attribute__((swift_name("setIOSPush(token:)")));
- (void)setOnceKey:(NSString *)key value:(id)value __attribute__((swift_name("setOnce(key:value:)")));
- (void)setOnceProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("setOnce(properties:)")));
- (void)setSmsMobile:(NSString *)mobile __attribute__((swift_name("setSms(mobile:)")));
- (void)setWhatsAppMobile:(NSString *)mobile __attribute__((swift_name("setWhatsApp(mobile:)")));
- (void)unSetKey:(NSString *)key __attribute__((swift_name("unSet(key:)")));
- (void)unSetKeys:(NSArray<NSString *> *)keys __attribute__((swift_name("unSet(keys:)")));
- (void)unSetEmailEmail:(NSString *)email __attribute__((swift_name("unSetEmail(email:)")));
- (void)unSetIOSPushToken:(NSString *)token __attribute__((swift_name("unSetIOSPush(token:)")));
- (void)unSetSmsMobile:(NSString *)mobile __attribute__((swift_name("unSetSms(mobile:)")));
- (void)unSetWhatsAppMobile:(NSString *)mobile __attribute__((swift_name("unSetWhatsApp(mobile:)")));
@end;

__attribute__((swift_name("SuprSendDatabase")))
@protocol SSSSuprSendDatabase <SSSRuntimeTransacter>
@required
@property (readonly) id<SSSConfigTableQueries> configTableQueries __attribute__((swift_name("configTableQueries")));
@property (readonly) id<SSSEventTableQueries> eventTableQueries __attribute__((swift_name("eventTableQueries")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SuprSendDatabaseCompanion")))
@interface SSSSuprSendDatabaseCompanion : SSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSSSuprSendDatabaseCompanion *shared __attribute__((swift_name("shared")));
- (id<SSSSuprSendDatabase>)invokeDriver:(id<SSSRuntimeSqlDriver>)driver ConfigTableAdapter:(SSSConfigTableAdapter *)ConfigTableAdapter EventTableAdapter:(SSSEventTableAdapter *)EventTableAdapter __attribute__((swift_name("invoke(driver:ConfigTableAdapter:EventTableAdapter:)")));
@property (readonly) id<SSSRuntimeSqlDriverSchema> Schema __attribute__((swift_name("Schema")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigModel")))
@interface SSSConfigModel : SSSBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SSSConfigModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SSSConfigModel *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigModel.Companion")))
@interface SSSConfigModelCompanion : SSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSSConfigModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SSSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol SSSKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface SSSKotlinEnum<E> : SSSBase <SSSKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SSSKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogLevel")))
@interface SSSLogLevel : SSSKotlinEnum<SSSLogLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SSSLogLevel *verbose __attribute__((swift_name("verbose")));
@property (class, readonly) SSSLogLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) SSSLogLevel *info __attribute__((swift_name("info")));
@property (class, readonly) SSSLogLevel *error __attribute__((swift_name("error")));
@property (class, readonly) SSSLogLevel *off __attribute__((swift_name("off")));
+ (SSSKotlinArray<SSSLogLevel *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t num __attribute__((swift_name("num")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoggerKMM")))
@interface SSSLoggerKMM : SSSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("d(tag:message:)")));
- (void)dTag:(NSString *)tag message:(NSString *)message throwable:(SSSKotlinThrowable *)throwable __attribute__((swift_name("d(tag:message:throwable:)")));
- (void)eTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("e(tag:message:)")));
- (void)eTag:(NSString *)tag message:(NSString *)message throwable:(SSSKotlinThrowable * _Nullable)throwable __attribute__((swift_name("e(tag:message:throwable:)")));
- (void)iTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("i(tag:message:)")));
- (void)iTag:(NSString *)tag message:(NSString *)message throwable:(SSSKotlinThrowable *)throwable __attribute__((swift_name("i(tag:message:throwable:)")));
- (void)vTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("v(tag:message:)")));
- (void)vTag:(NSString *)tag message:(NSString *)message throwable:(SSSKotlinThrowable *)throwable __attribute__((swift_name("v(tag:message:throwable:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkType")))
@interface SSSNetworkType : SSSKotlinEnum<SSSNetworkType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SSSNetworkType *wifi __attribute__((swift_name("wifi")));
@property (class, readonly) SSSNetworkType *g2 __attribute__((swift_name("g2")));
@property (class, readonly) SSSNetworkType *g3 __attribute__((swift_name("g3")));
@property (class, readonly) SSSNetworkType *g4 __attribute__((swift_name("g4")));
@property (class, readonly) SSSNetworkType *g5 __attribute__((swift_name("g5")));
@property (class, readonly) SSSNetworkType *unknown __attribute__((swift_name("unknown")));
+ (SSSKotlinArray<SSSNetworkType *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *readableName __attribute__((swift_name("readableName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventFlushHandler")))
@interface SSSEventFlushHandler : SSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eventFlushHandler __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSSEventFlushHandler *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)flushEventsWithCompletionHandler:(void (^)(SSSKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("flushEvents(completionHandler:)")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventModel")))
@interface SSSEventModel : SSSBase
- (instancetype)initWithValue:(SSSKotlinx_serialization_jsonJsonElement *)value id:(NSString *)id __attribute__((swift_name("init(value:id:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SSSEventModelCompanion *companion __attribute__((swift_name("companion")));
- (SSSKotlinx_serialization_jsonJsonElement *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SSSEventModel *)doCopyValue:(SSSKotlinx_serialization_jsonJsonElement *)value id:(NSString *)id __attribute__((swift_name("doCopy(value:id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) SSSKotlinx_serialization_jsonJsonElement *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventModel.Companion")))
@interface SSSEventModelCompanion : SSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSSEventModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SSSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayloadCreator")))
@interface SSSPayloadCreator : SSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)payloadCreator __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSSPayloadCreator *shared __attribute__((swift_name("shared")));
- (NSDictionary<NSString *, SSSKotlinx_serialization_jsonJsonElement *> *)buildIdentityEventPayloadIdentifiedId:(NSString *)identifiedId anonymousId:(NSString *)anonymousId apiKey:(NSString *)apiKey __attribute__((swift_name("buildIdentityEventPayload(identifiedId:anonymousId:apiKey:)")));
- (NSDictionary<NSString *, SSSKotlinx_serialization_jsonJsonElement *> *)buildTrackEventPayloadEventName:(NSString *)eventName distinctId:(NSString *)distinctId superProperties:(NSDictionary<NSString *, SSSKotlinx_serialization_jsonJsonElement *> *)superProperties defaultProperties:(NSDictionary<NSString *, SSSKotlinx_serialization_jsonJsonElement *> *)defaultProperties userProperties:(NSDictionary<NSString *, SSSKotlinx_serialization_jsonJsonElement *> * _Nullable)userProperties apiKey:(NSString *)apiKey __attribute__((swift_name("buildTrackEventPayload(eventName:distinctId:superProperties:defaultProperties:userProperties:apiKey:)")));
- (NSDictionary<NSString *, SSSKotlinx_serialization_jsonJsonElement *> *)buildUserOperatorPayloadDistinctId:(NSString *)distinctId setProperties:(SSSKotlinx_serialization_jsonJsonElement *)setProperties operator:(NSString *)operator_ apiKey:(NSString *)apiKey __attribute__((swift_name("buildUserOperatorPayload(distinctId:setProperties:operator:apiKey:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseDriverFactory")))
@interface SSSDatabaseDriverFactory : SSSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<SSSRuntimeSqlDriver>)createDriver __attribute__((swift_name("createDriver()")));
- (NSString *)getDatabaseName __attribute__((swift_name("getDatabaseName()")));
@end;

__attribute__((swift_name("UserEventDataSourceContract")))
@protocol SSSUserEventDataSourceContract
@required
- (void)deleteIds:(NSArray<NSString *> *)ids __attribute__((swift_name("delete(ids:)")));
- (NSArray<SSSEventModel *> *)getEventsLimit:(int64_t)limit isDirty:(BOOL)isDirty __attribute__((swift_name("getEvents(limit:isDirty:)")));
- (void)trackEventModel:(SSSEventModel *)eventModel isDirty:(BOOL)isDirty __attribute__((swift_name("track(eventModel:isDirty:)")));
@end;

__attribute__((swift_name("UserApiInternalContract")))
@protocol SSSUserApiInternalContract
@required
- (void)appendPropertiesJson:(NSString *)propertiesJson __attribute__((swift_name("append(propertiesJson:)")));
- (void)appendKey:(NSString *)key value:(id)value __attribute__((swift_name("append(key:value:)")));
- (void)incrementPropertiesJson:(NSString *)propertiesJson __attribute__((swift_name("increment(propertiesJson:)")));
- (void)incrementKey:(NSString *)key value:(id)value __attribute__((swift_name("increment(key:value:)")));
- (void)removePropertiesJson:(NSString *)propertiesJson __attribute__((swift_name("remove(propertiesJson:)")));
- (void)removeKey:(NSString *)key value:(id)value __attribute__((swift_name("remove(key:value:)")));
- (void)setPropertiesJson:(NSString *)propertiesJson __attribute__((swift_name("set(propertiesJson:)")));
- (void)setKey:(NSString *)key value:(id)value __attribute__((swift_name("set(key:value:)")));
- (void)setAndroidFcmPushNewToken:(NSString *)newToken __attribute__((swift_name("setAndroidFcmPush(newToken:)")));
- (void)setAndroidXiaomiPushNewToken:(NSString *)newToken __attribute__((swift_name("setAndroidXiaomiPush(newToken:)")));
- (void)setEmailEmail:(NSString *)email __attribute__((swift_name("setEmail(email:)")));
- (void)setIOSPushNewToken:(NSString *)newToken __attribute__((swift_name("setIOSPush(newToken:)")));
- (void)setOncePropertiesJson:(NSString *)propertiesJson __attribute__((swift_name("setOnce(propertiesJson:)")));
- (void)setOnceKey:(NSString *)key value:(id)value __attribute__((swift_name("setOnce(key:value:)")));
- (void)setSmsMobile:(NSString *)mobile __attribute__((swift_name("setSms(mobile:)")));
- (void)setWhatsAppMobile:(NSString *)mobile __attribute__((swift_name("setWhatsApp(mobile:)")));
- (void)unSetKey:(NSString *)key __attribute__((swift_name("unSet(key:)")));
- (void)unSetKeys:(NSArray<NSString *> *)keys __attribute__((swift_name("unSet(keys:)")));
- (void)unSetAndroidFcmPushToken:(NSString *)token __attribute__((swift_name("unSetAndroidFcmPush(token:)")));
- (void)unSetAndroidXiaomiPushToken:(NSString *)token __attribute__((swift_name("unSetAndroidXiaomiPush(token:)")));
- (void)unSetEmailEmail:(NSString *)email __attribute__((swift_name("unSetEmail(email:)")));
- (void)unSetIOSPushToken:(NSString *)token __attribute__((swift_name("unSetIOSPush(token:)")));
- (void)unSetSmsMobile:(NSString *)mobile __attribute__((swift_name("unSetSms(mobile:)")));
- (void)unSetWhatsAppMobile:(NSString *)mobile __attribute__((swift_name("unSetWhatsApp(mobile:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface SSSKotlinx_serialization_jsonJsonElement : SSSBase
@property (class, readonly, getter=companion) SSSKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end;

@interface SSSKotlinx_serialization_jsonJsonElement (Extensions)
- (SSSKotlinx_serialization_jsonJsonElement * _Nullable)addUpdateJsoObjectUpdateJsonObject:(NSDictionary<NSString *, SSSKotlinx_serialization_jsonJsonElement *> *)updateJsonObject __attribute__((swift_name("addUpdateJsoObject(updateJsonObject:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinExtensionKt")))
@interface SSSKotlinExtensionKt : SSSBase
+ (NSString *)getRandomStringLength:(int32_t)length __attribute__((swift_name("getRandomString(length:)")));
+ (NSDictionary<NSString *, SSSKotlinx_serialization_jsonJsonElement *> *)addCreateNewJO:(NSDictionary<NSString *, SSSKotlinx_serialization_jsonJsonElement *> *)receiver key:(NSString *)key value:(id)value __attribute__((swift_name("addCreateNewJO(_:key:value:)")));
+ (NSDictionary<NSString *, SSSKotlinx_serialization_jsonJsonElement *> *)addUpdateJsoObject:(NSDictionary<NSString *, SSSKotlinx_serialization_jsonJsonElement *> * _Nullable)receiver updateJsonObject:(NSDictionary<NSString *, SSSKotlinx_serialization_jsonJsonElement *> *)updateJsonObject __attribute__((swift_name("addUpdateJsoObject(_:updateJsonObject:)")));
+ (SSSKotlinx_serialization_jsonJsonPrimitive * _Nullable)convertToJsonPrimitive:(id)receiver key:(NSString *)key __attribute__((swift_name("convertToJsonPrimitive(_:key:)")));
+ (BOOL)isInValidKey:(NSString *)receiver __attribute__((swift_name("isInValidKey(_:)")));
+ (NSDictionary<NSString *, SSSKotlinx_serialization_jsonJsonElement *> *)toJsonObject:(NSDictionary<NSString *, id> *)receiver __attribute__((swift_name("toJsonObject(_:)")));
+ (NSDictionary<NSString *, SSSKotlinx_serialization_jsonJsonElement *> *)toKotlinJsonObject:(NSString * _Nullable)receiver __attribute__((swift_name("toKotlinJsonObject(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DispatchersKt")))
@interface SSSDispatchersKt : SSSBase
+ (SSSKotlinx_coroutines_coreCoroutineDispatcher *)ioDispatcher __attribute__((swift_name("ioDispatcher()")));
+ (SSSKotlinx_coroutines_coreCoroutineDispatcher *)mainDispatcher __attribute__((swift_name("mainDispatcher()")));
+ (SSSKotlinx_coroutines_coreCoroutineDispatcher *)singleThreadDispatcher __attribute__((swift_name("singleThreadDispatcher()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonKt")))
@interface SSSCommonKt : SSSBase
+ (BOOL)isMobileNumberValidMobile:(NSString *)mobile __attribute__((swift_name("isMobileNumberValid(mobile:)")));
+ (NSString *)uuid __attribute__((swift_name("uuid()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpClientEngineKt")))
@interface SSSHttpClientEngineKt : SSSBase
@property (class, readonly) id<SSSKtor_client_coreHttpClientEngine> httpClientEngine __attribute__((swift_name("httpClientEngine")));
@end;

__attribute__((swift_name("RuntimeColumnAdapter")))
@protocol SSSRuntimeColumnAdapter
@required
- (id)decodeDatabaseValue:(id _Nullable)databaseValue __attribute__((swift_name("decode(databaseValue:)")));
- (id _Nullable)encodeValue:(id)value __attribute__((swift_name("encode(value:)")));
@end;

__attribute__((swift_name("RuntimeQuery")))
@interface SSSRuntimeQuery<__covariant RowType> : SSSBase
- (instancetype)initWithQueries:(NSMutableArray<SSSRuntimeQuery<id> *> *)queries mapper:(RowType (^)(id<SSSRuntimeSqlCursor>))mapper __attribute__((swift_name("init(queries:mapper:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<SSSRuntimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (id<SSSRuntimeSqlCursor>)execute __attribute__((swift_name("execute()")));
- (NSArray<RowType> *)executeAsList __attribute__((swift_name("executeAsList()")));
- (RowType)executeAsOne __attribute__((swift_name("executeAsOne()")));
- (RowType _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
- (void)notifyDataChanged __attribute__((swift_name("notifyDataChanged()")));
- (void)removeListenerListener:(id<SSSRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@property (readonly) RowType (^mapper)(id<SSSRuntimeSqlCursor>) __attribute__((swift_name("mapper")));
@end;

__attribute__((swift_name("RuntimeTransactionCallbacks")))
@protocol SSSRuntimeTransactionCallbacks
@required
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithoutReturn")))
@protocol SSSRuntimeTransactionWithoutReturn <SSSRuntimeTransactionCallbacks>
@required
- (void)rollback __attribute__((swift_name("rollback()")));
- (void)transactionBody:(void (^)(id<SSSRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(body:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithReturn")))
@protocol SSSRuntimeTransactionWithReturn <SSSRuntimeTransactionCallbacks>
@required
- (void)rollbackReturnValue:(id _Nullable)returnValue __attribute__((swift_name("rollback(returnValue:)")));
- (id _Nullable)transactionBody_:(id _Nullable (^)(id<SSSRuntimeTransactionWithReturn>))body __attribute__((swift_name("transaction(body_:)")));
@end;

__attribute__((swift_name("RuntimeCloseable")))
@protocol SSSRuntimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("RuntimeSqlDriver")))
@protocol SSSRuntimeSqlDriver <SSSRuntimeCloseable>
@required
- (SSSRuntimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));
- (void)executeIdentifier:(SSSInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<SSSRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));
- (id<SSSRuntimeSqlCursor>)executeQueryIdentifier:(SSSInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<SSSRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:parameters:binders:)")));
- (SSSRuntimeTransacterTransaction *)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
@end;

__attribute__((swift_name("RuntimeSqlDriverSchema")))
@protocol SSSRuntimeSqlDriverSchema
@required
- (void)createDriver:(id<SSSRuntimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));
- (void)migrateDriver:(id<SSSRuntimeSqlDriver>)driver oldVersion:(int32_t)oldVersion newVersion:(int32_t)newVersion __attribute__((swift_name("migrate(driver:oldVersion:newVersion:)")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol SSSKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<SSSKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<SSSKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol SSSKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<SSSKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<SSSKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol SSSKotlinx_serialization_coreKSerializer <SSSKotlinx_serialization_coreSerializationStrategy, SSSKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface SSSKotlinEnumCompanion : SSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSSKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SSSKotlinArray<T> : SSSBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SSSInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SSSKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface SSSKotlinThrowable : SSSBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SSSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SSSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (SSSKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SSSKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface SSSKotlinException : SSSKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SSSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SSSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface SSSKotlinRuntimeException : SSSKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SSSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SSSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SSSKotlinIllegalStateException : SSSKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SSSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SSSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface SSSKotlinCancellationException : SSSKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SSSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SSSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface SSSKotlinUnit : SSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSSKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface SSSKotlinx_serialization_jsonJsonElementCompanion : SSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSSKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<SSSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJsonPrimitive")))
@interface SSSKotlinx_serialization_jsonJsonPrimitive : SSSKotlinx_serialization_jsonJsonElement
@property (class, readonly, getter=companion) SSSKotlinx_serialization_jsonJsonPrimitiveCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) BOOL isString __attribute__((swift_name("isString")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol SSSKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<SSSKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<SSSKotlinCoroutineContextElement> _Nullable)getKey_:(id<SSSKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key_:)")));
- (id<SSSKotlinCoroutineContext>)minusKeyKey:(id<SSSKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<SSSKotlinCoroutineContext>)plusContext:(id<SSSKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol SSSKotlinCoroutineContextElement <SSSKotlinCoroutineContext>
@required
@property (readonly) id<SSSKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface SSSKotlinAbstractCoroutineContextElement : SSSBase <SSSKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<SSSKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<SSSKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol SSSKotlinContinuationInterceptor <SSSKotlinCoroutineContextElement>
@required
- (id<SSSKotlinContinuation>)interceptContinuationContinuation:(id<SSSKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<SSSKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface SSSKotlinx_coroutines_coreCoroutineDispatcher : SSSKotlinAbstractCoroutineContextElement <SSSKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<SSSKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SSSKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<SSSKotlinCoroutineContext>)context block:(id<SSSKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<SSSKotlinCoroutineContext>)context block:(id<SSSKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<SSSKotlinContinuation>)interceptContinuationContinuation:(id<SSSKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<SSSKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (SSSKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (SSSKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(SSSKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<SSSKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol SSSKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<SSSKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol SSSKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol SSSKtor_client_coreHttpClientEngine <SSSKotlinx_coroutines_coreCoroutineScope, SSSKtor_ioCloseable>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(SSSKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(SSSKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(SSSKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) SSSKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) SSSKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<SSSKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end;

__attribute__((swift_name("RuntimeSqlCursor")))
@protocol SSSRuntimeSqlCursor <SSSRuntimeCloseable>
@required
- (SSSKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (SSSDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (SSSLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (BOOL)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("RuntimeQueryListener")))
@protocol SSSRuntimeQueryListener
@required
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end;

__attribute__((swift_name("RuntimeTransacterTransaction")))
@interface SSSRuntimeTransacterTransaction : SSSBase <SSSRuntimeTransactionCallbacks>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
- (void)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));
@property (readonly) SSSRuntimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end;

__attribute__((swift_name("RuntimeSqlPreparedStatement")))
@protocol SSSRuntimeSqlPreparedStatement
@required
- (void)bindBytesIndex:(int32_t)index bytes:(SSSKotlinByteArray * _Nullable)bytes __attribute__((swift_name("bindBytes(index:bytes:)")));
- (void)bindDoubleIndex:(int32_t)index double:(SSSDouble * _Nullable)double_ __attribute__((swift_name("bindDouble(index:double:)")));
- (void)bindLongIndex:(int32_t)index long:(SSSLong * _Nullable)long_ __attribute__((swift_name("bindLong(index:long:)")));
- (void)bindStringIndex:(int32_t)index string:(NSString * _Nullable)string __attribute__((swift_name("bindString(index:string:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol SSSKotlinx_serialization_coreEncoder
@required
- (id<SSSKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<SSSKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<SSSKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<SSSKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<SSSKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) SSSKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol SSSKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<SSSKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<SSSKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<SSSKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) SSSKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol SSSKotlinx_serialization_coreDecoder
@required
- (id<SSSKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<SSSKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (SSSKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<SSSKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<SSSKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) SSSKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol SSSKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next_ __attribute__((swift_name("next_()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonPrimitive.Companion")))
@interface SSSKotlinx_serialization_jsonJsonPrimitiveCompanion : SSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSSKotlinx_serialization_jsonJsonPrimitiveCompanion *shared __attribute__((swift_name("shared")));
- (id<SSSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol SSSKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol SSSKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<SSSKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface SSSKotlinAbstractCoroutineContextKey<B, E> : SSSBase <SSSKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<SSSKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<SSSKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface SSSKotlinx_coroutines_coreCoroutineDispatcherKey : SSSKotlinAbstractCoroutineContextKey<id<SSSKotlinContinuationInterceptor>, SSSKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<SSSKotlinCoroutineContextKey>)baseKey safeCast:(id<SSSKotlinCoroutineContextElement> _Nullable (^)(id<SSSKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSSKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol SSSKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface SSSKtor_client_coreHttpRequestData : SSSBase
- (instancetype)initWithUrl:(SSSKtor_httpUrl *)url method:(SSSKtor_httpHttpMethod *)method headers:(id<SSSKtor_httpHeaders>)headers body:(SSSKtor_httpOutgoingContent *)body executionContext:(id<SSSKotlinx_coroutines_coreJob>)executionContext attributes:(id<SSSKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<SSSKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SSSKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) SSSKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<SSSKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<SSSKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) SSSKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) SSSKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface SSSKtor_client_coreHttpResponseData : SSSBase
- (instancetype)initWithStatusCode:(SSSKtor_httpHttpStatusCode *)statusCode requestTime:(SSSKtor_utilsGMTDate *)requestTime headers:(id<SSSKtor_httpHeaders>)headers version:(SSSKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<SSSKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<SSSKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<SSSKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) SSSKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) SSSKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) SSSKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) SSSKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface SSSKtor_client_coreHttpClient : SSSBase <SSSKotlinx_coroutines_coreCoroutineScope, SSSKtor_ioCloseable>
- (instancetype)initWithEngine:(id<SSSKtor_client_coreHttpClientEngine>)engine userConfig:(SSSKtor_client_coreHttpClientConfig<SSSKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (SSSKtor_client_coreHttpClient *)configBlock:(void (^)(SSSKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<SSSKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SSSKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<SSSKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<SSSKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) SSSKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) SSSKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) SSSKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) SSSKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) SSSKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) SSSKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface SSSKtor_client_coreHttpClientEngineConfig : SSSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property SSSKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol SSSKtor_client_coreHttpClientEngineCapability
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface SSSKotlinByteArray : SSSBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SSSByte *(^)(SSSInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SSSKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol SSSKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<SSSKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SSSKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SSSKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) SSSKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface SSSKotlinx_serialization_coreSerializersModule : SSSBase
- (void)dumpToCollector:(id<SSSKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<SSSKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<SSSKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<SSSKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<SSSKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SSSKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<SSSKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SSSKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol SSSKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface SSSKotlinx_serialization_coreSerialKind : SSSBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol SSSKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<SSSKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SSSKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SSSKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<SSSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) SSSKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SSSKotlinNothing : SSSBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface SSSKtor_httpUrl : SSSBase
@property (class, readonly, getter=companion) SSSKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<SSSKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) SSSKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface SSSKtor_httpHttpMethod : SSSBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SSSKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SSSKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol SSSKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<SSSKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol SSSKtor_httpHeaders <SSSKtor_utilsStringValues>
@required
@end;

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface SSSKtor_httpOutgoingContent : SSSBase
- (id _Nullable)getPropertyKey:(SSSKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(SSSKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<SSSKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) SSSLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) SSSKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<SSSKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) SSSKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol SSSKotlinx_coroutines_coreJob <SSSKotlinCoroutineContextElement>
@required
- (id<SSSKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<SSSKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(SSSKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (SSSKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<SSSKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(SSSKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<SSSKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(SSSKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(SSSKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<SSSKotlinx_coroutines_coreJob>)plusOther_:(id<SSSKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<SSSKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<SSSKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol SSSKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(SSSKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(SSSKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey__:(SSSKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key__:)")));
- (id _Nullable)getOrNullKey:(SSSKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(SSSKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(SSSKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(SSSKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(SSSKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<SSSKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface SSSKtor_httpHttpStatusCode : SSSBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SSSKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SSSKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (SSSKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface SSSKtor_utilsGMTDate : SSSBase <SSSKotlinComparable>
@property (class, readonly, getter=companion) SSSKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SSSKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (SSSKtor_utilsWeekDay *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (SSSKtor_utilsMonth *)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (int64_t)component9 __attribute__((swift_name("component9()")));
- (SSSKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(SSSKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(SSSKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) SSSKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) SSSKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface SSSKtor_httpHttpProtocolVersion : SSSBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SSSKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (SSSKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface SSSKtor_client_coreHttpClientConfig<T> : SSSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SSSKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(SSSKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<SSSKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(SSSKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(SSSKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface SSSKtor_eventsEvents : SSSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(SSSKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<SSSKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(SSSKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(SSSKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end;

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface SSSKtor_utilsPipeline<TSubject, TContext> : SSSBase
- (instancetype)initWithPhase:(SSSKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SSSKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(SSSKotlinArray<SSSKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(SSSKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(SSSKtor_utilsPipelinePhase *)reference phase:(SSSKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(SSSKtor_utilsPipelinePhase *)reference phase:(SSSKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(SSSKtor_utilsPipelinePhase *)phase block:(id<SSSKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<SSSKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(SSSKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(SSSKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(SSSKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(SSSKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
@property (readonly) id<SSSKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly, getter=isEmpty_) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<SSSKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface SSSKtor_client_coreHttpReceivePipeline : SSSKtor_utilsPipeline<SSSKtor_client_coreHttpResponse *, SSSKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(SSSKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SSSKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(SSSKotlinArray<SSSKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SSSKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface SSSKtor_client_coreHttpRequestPipeline : SSSKtor_utilsPipeline<id, SSSKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(SSSKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SSSKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(SSSKotlinArray<SSSKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SSSKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface SSSKtor_client_coreHttpResponsePipeline : SSSKtor_utilsPipeline<SSSKtor_client_coreHttpResponseContainer *, SSSKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(SSSKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SSSKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(SSSKotlinArray<SSSKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SSSKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface SSSKtor_client_coreHttpSendPipeline : SSSKtor_utilsPipeline<id, SSSKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(SSSKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SSSKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(SSSKotlinArray<SSSKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SSSKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface SSSKtor_client_coreProxyConfig : SSSBase
- (instancetype)initWithUrl:(SSSKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SSSKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface SSSKotlinByteIterator : SSSBase <SSSKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SSSByte *)next_ __attribute__((swift_name("next_()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol SSSKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<SSSKotlinKClass>)kClass provider:(id<SSSKotlinx_serialization_coreKSerializer> (^)(NSArray<id<SSSKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<SSSKotlinKClass>)kClass serializer:(id<SSSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<SSSKotlinKClass>)baseClass actualClass:(id<SSSKotlinKClass>)actualClass actualSerializer:(id<SSSKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<SSSKotlinKClass>)baseClass defaultDeserializerProvider:(id<SSSKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<SSSKotlinKClass>)baseClass defaultDeserializerProvider:(id<SSSKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<SSSKotlinKClass>)baseClass defaultSerializerProvider:(id<SSSKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SSSKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SSSKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol SSSKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol SSSKotlinKClass <SSSKotlinKDeclarationContainer, SSSKotlinKAnnotatedElement, SSSKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface SSSKtor_httpUrlCompanion : SSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSSKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Ktor_httpParameters")))
@protocol SSSKtor_httpParameters <SSSKtor_utilsStringValues>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface SSSKtor_httpURLProtocol : SSSBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SSSKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (SSSKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface SSSKtor_httpHttpMethodCompanion : SSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSSKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (SSSKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<SSSKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) SSSKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) SSSKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) SSSKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) SSSKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) SSSKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) SSSKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) SSSKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end;

__attribute__((swift_name("KotlinMapEntry")))
@protocol SSSKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface SSSKtor_utilsAttributeKey<T> : SSSBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface SSSKtor_httpHeaderValueWithParameters : SSSBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<SSSKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SSSKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<SSSKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface SSSKtor_httpContentType : SSSKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<SSSKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<SSSKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SSSKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(SSSKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (SSSKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (SSSKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol SSSKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol SSSKotlinx_coroutines_coreChildHandle <SSSKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(SSSKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<SSSKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol SSSKotlinx_coroutines_coreChildJob <SSSKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<SSSKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol SSSKotlinSequence
@required
- (id<SSSKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol SSSKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<SSSKotlinx_coroutines_coreSelectInstance>)select block:(id<SSSKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface SSSKtor_httpHttpStatusCodeCompanion : SSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSSKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (SSSKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) SSSKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) SSSKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) SSSKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) SSSKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) SSSKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) SSSKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) SSSKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) SSSKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) SSSKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) SSSKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) SSSKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) SSSKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) SSSKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) SSSKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) SSSKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) SSSKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) SSSKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) SSSKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) SSSKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) SSSKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) SSSKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) SSSKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) SSSKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) SSSKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) SSSKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) SSSKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) SSSKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) SSSKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) SSSKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) SSSKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) SSSKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) SSSKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) SSSKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) SSSKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) SSSKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) SSSKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) SSSKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) SSSKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) SSSKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) SSSKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) SSSKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) SSSKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) SSSKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) SSSKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) SSSKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) SSSKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) SSSKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) SSSKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) SSSKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) SSSKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) SSSKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) SSSKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<SSSKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface SSSKtor_utilsGMTDateCompanion : SSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSSKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SSSKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface SSSKtor_utilsWeekDay : SSSKotlinEnum<SSSKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SSSKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SSSKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) SSSKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) SSSKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) SSSKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) SSSKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) SSSKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) SSSKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (SSSKotlinArray<SSSKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface SSSKtor_utilsMonth : SSSKotlinEnum<SSSKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SSSKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SSSKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) SSSKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) SSSKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) SSSKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) SSSKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) SSSKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) SSSKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) SSSKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) SSSKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) SSSKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) SSSKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) SSSKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (SSSKotlinArray<SSSKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface SSSKtor_httpHttpProtocolVersionCompanion : SSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSSKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (SSSKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (SSSKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) SSSKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) SSSKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) SSSKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) SSSKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) SSSKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol SSSKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(SSSKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) SSSKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface SSSKtor_eventsEventDefinition<T> : SSSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface SSSKtor_utilsPipelinePhase : SSSBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol SSSKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol SSSKotlinSuspendFunction2 <SSSKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface SSSKtor_client_coreHttpReceivePipelinePhases : SSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSSKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SSSKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) SSSKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) SSSKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol SSSKtor_httpHttpMessage
@required
@property (readonly) id<SSSKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface SSSKtor_client_coreHttpResponse : SSSBase <SSSKtor_httpHttpMessage, SSSKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SSSKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<SSSKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) SSSKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) SSSKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) SSSKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) SSSKtor_httpHttpProtocolVersion *version_ __attribute__((swift_name("version_")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface SSSKtor_client_coreHttpRequestPipelinePhases : SSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSSKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SSSKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) SSSKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) SSSKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) SSSKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) SSSKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol SSSKtor_httpHttpMessageBuilder
@required
@property (readonly) SSSKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface SSSKtor_client_coreHttpRequestBuilder : SSSBase <SSSKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SSSKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (SSSKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<SSSKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<SSSKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<SSSKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (SSSKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(SSSKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (SSSKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(SSSKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(SSSKtor_httpURLBuilder *, SSSKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<SSSKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property SSSKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<SSSKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) SSSKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property SSSKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) SSSKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface SSSKtor_client_coreHttpResponsePipelinePhases : SSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSSKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SSSKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) SSSKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) SSSKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) SSSKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) SSSKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface SSSKtor_client_coreHttpResponseContainer : SSSBase
- (instancetype)initWithExpectedType:(SSSKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (SSSKtor_utilsTypeInfo *)component1 __attribute__((swift_name("component1()")));
- (id)component2 __attribute__((swift_name("component2()")));
- (SSSKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(SSSKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SSSKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface SSSKtor_client_coreHttpClientCall : SSSBase <SSSKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(SSSKtor_client_coreHttpClient *)client requestData:(SSSKtor_client_coreHttpRequestData *)requestData responseData:(SSSKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(SSSKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SSSKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(SSSKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<SSSKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<SSSKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) SSSKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<SSSKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<SSSKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property SSSKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface SSSKtor_client_coreHttpSendPipelinePhases : SSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSSKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SSSKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) SSSKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) SSSKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) SSSKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) SSSKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface SSSKtor_httpURLProtocolCompanion : SSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSSKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (SSSKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) SSSKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) SSSKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) SSSKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) SSSKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) SSSKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, SSSKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface SSSKtor_httpHeaderValueParam : SSSBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SSSKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value __attribute__((swift_name("doCopy(name:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface SSSKtor_httpHeaderValueWithParametersCompanion : SSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSSKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<SSSKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface SSSKtor_httpContentTypeCompanion : SSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSSKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (SSSKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) SSSKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol SSSKotlinx_coroutines_coreParentJob <SSSKotlinx_coroutines_coreJob>
@required
- (SSSKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol SSSKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<SSSKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(SSSKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(SSSKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(SSSKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<SSSKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol SSSKotlinSuspendFunction0 <SSSKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface SSSKtor_utilsWeekDayCompanion : SSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSSKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (SSSKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (SSSKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface SSSKtor_utilsMonthCompanion : SSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSSKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (SSSKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (SSSKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol SSSKtor_ioByteReadChannel
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentWithCompletionHandler:(void (^)(SSSKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(completionHandler:)")));
- (BOOL)cancelCause_:(SSSKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(SSSLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(SSSKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(SSSLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(SSSKtor_ioChunkBuffer *)dst completionHandler:(void (^)(SSSInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(SSSKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(SSSInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));
- (int32_t)readAvailableMin:(int32_t)min block:(void (^)(SSSKtor_ioBuffer *))block __attribute__((swift_name("readAvailable(min:block:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(SSSInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(SSSInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(SSSBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(SSSByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(SSSDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(SSSFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(SSSKtor_ioChunkBuffer *)dst n:(int32_t)n completionHandler:(void (^)(SSSKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(SSSKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(SSSKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(SSSKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(SSSKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(SSSInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(SSSLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size completionHandler:(void (^)(SSSKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit completionHandler:(void (^)(SSSKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<SSSKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(SSSShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<SSSKotlinSuspendFunction1>)consumer completionHandler:(void (^)(SSSKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<SSSKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(SSSBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) SSSKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end;

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol SSSKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<SSSKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<SSSKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<SSSKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<SSSKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface SSSKtor_utilsStringValuesBuilderImpl : SSSBase <SSSKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<SSSKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<SSSKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<SSSKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<SSSKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@property (readonly) SSSMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface SSSKtor_httpHeadersBuilder : SSSKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<SSSKtor_httpHeaders>)build __attribute__((swift_name("build()")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface SSSKtor_client_coreHttpRequestBuilderCompanion : SSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSSKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface SSSKtor_httpURLBuilder : SSSBase
- (instancetype)initWithProtocol:(SSSKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<SSSKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SSSKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (SSSKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<SSSKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<SSSKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property SSSKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface SSSKtor_utilsTypeInfo : SSSBase
- (instancetype)initWithType:(id<SSSKotlinKClass>)type reifiedType:(id<SSSKotlinKType>)reifiedType kotlinType:(id<SSSKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (id<SSSKotlinKClass>)component1 __attribute__((swift_name("component1()")));
- (id<SSSKotlinKType>)component2 __attribute__((swift_name("component2()")));
- (id<SSSKotlinKType> _Nullable)component3 __attribute__((swift_name("component3()")));
- (SSSKtor_utilsTypeInfo *)doCopyType:(id<SSSKotlinKClass>)type reifiedType:(id<SSSKotlinKType>)reifiedType kotlinType:(id<SSSKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SSSKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<SSSKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<SSSKotlinKClass> type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface SSSKtor_client_coreHttpClientCallCompanion : SSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSSKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SSSKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((unavailable("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol SSSKtor_client_coreHttpRequest <SSSKtor_httpHttpMessage, SSSKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<SSSKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) SSSKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) SSSKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) SSSKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) SSSKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface SSSKotlinx_coroutines_coreAtomicDesc : SSSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(SSSKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(SSSKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property SSSKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface SSSKotlinx_coroutines_coreOpDescriptor : SSSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(SSSKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SSSKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface SSSKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : SSSKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(SSSKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SSSKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(SSSKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SSSKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) SSSKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) SSSKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) SSSKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface SSSKtor_ioMemory : SSSBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SSSKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(SSSKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(SSSKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (SSSKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (SSSKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end;

__attribute__((swift_name("Ktor_ioBuffer")))
@interface SSSKtor_ioBuffer : SSSBase
- (instancetype)initWithMemory:(SSSKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SSSKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (SSSKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)duplicateToCopy:(SSSKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) SSSKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end;

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface SSSKtor_ioChunkBuffer : SSSKtor_ioBuffer
- (instancetype)initWithMemory:(SSSKtor_ioMemory *)memory origin:(SSSKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<SSSKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMemory:(SSSKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SSSKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (SSSKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (SSSKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<SSSKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next__) SSSKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) SSSKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end;

__attribute__((swift_name("Ktor_ioInput")))
@interface SSSKtor_ioInput : SSSBase <SSSKtor_ioCloseable>
- (instancetype)initWithHead:(SSSKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<SSSKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SSSKtor_ioInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));
- (SSSKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(SSSKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int64_t)peekToDestination:(SSSKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int32_t)peekToBuffer:(SSSKtor_ioChunkBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<SSSKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<SSSKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<SSSKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface SSSKtor_ioByteReadPacket : SSSKtor_ioInput
- (instancetype)initWithHead:(SSSKtor_ioChunkBuffer *)head pool:(id<SSSKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(SSSKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<SSSKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SSSKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (SSSKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));
- (SSSKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(SSSKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol SSSKtor_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (SSSKtor_ioChunkBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end;

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol SSSKotlinSuspendFunction1 <SSSKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinAppendable")))
@protocol SSSKotlinAppendable
@required
- (id<SSSKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<SSSKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<SSSKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface SSSKtor_httpURLBuilderCompanion : SSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSSKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol SSSKtor_httpParametersBuilder <SSSKtor_utilsStringValuesBuilder>
@required
@end;

__attribute__((swift_name("KotlinKType")))
@protocol SSSKotlinKType
@required
@property (readonly) NSArray<SSSKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));
@property (readonly) id<SSSKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface SSSKotlinx_coroutines_coreAtomicOp<__contravariant T> : SSSKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) SSSKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface SSSKotlinx_coroutines_coreLockFreeLinkedListNode : SSSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(SSSKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(SSSKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(SSSBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(SSSKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(SSSBoolean *(^)(SSSKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(SSSKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(SSSBoolean *(^)(SSSKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(SSSBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(SSSKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (SSSKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<SSSKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(SSSKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (SSSKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<SSSKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));
- (SSSKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(SSSBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (SSSKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next__) id next __attribute__((swift_name("next")));
@property (readonly) SSSKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) SSSKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface SSSKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : SSSKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(SSSKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)failureAffected:(SSSKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(SSSKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SSSKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(SSSKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(SSSKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(SSSKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(SSSKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
- (BOOL)retryAffected:(SSSKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (SSSKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(SSSKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(SSSKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SSSKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) SSSKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) SSSKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface SSSKtor_ioMemoryCompanion : SSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSSKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SSSKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface SSSKtor_ioBufferCompanion : SSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSSKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SSSKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol SSSKtor_ioObjectPool <SSSKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface SSSKtor_ioChunkBufferCompanion : SSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSSKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SSSKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<SSSKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<SSSKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioInput.Companion")))
@interface SSSKtor_ioInputCompanion : SSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSSKtor_ioInputCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface SSSKtor_ioByteReadPacketCompanion : SSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSSKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SSSKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface SSSKotlinKTypeProjection : SSSBase
- (instancetype)initWithVariance:(SSSKotlinKVariance * _Nullable)variance type:(id<SSSKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SSSKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (SSSKotlinKVariance * _Nullable)component1 __attribute__((swift_name("component1()")));
- (id<SSSKotlinKType> _Nullable)component2 __attribute__((swift_name("component2()")));
- (SSSKotlinKTypeProjection *)doCopyVariance:(SSSKotlinKVariance * _Nullable)variance type:(id<SSSKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SSSKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) SSSKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface SSSKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : SSSKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(SSSKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishOnSuccessAffected:(SSSKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SSSKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(SSSKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(SSSKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (SSSKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(SSSKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(SSSKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SSSKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) SSSKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) SSSKotlinx_coroutines_coreLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) SSSKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface SSSKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : SSSKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(SSSKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id _Nullable)failureAffected:(SSSKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(SSSKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SSSKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(SSSKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(SSSKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (SSSKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(SSSKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(SSSKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SSSKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) SSSKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) SSSKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) SSSKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface SSSKotlinKVariance : SSSKotlinEnum<SSSKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SSSKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) SSSKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) SSSKotlinKVariance *out __attribute__((swift_name("out")));
+ (SSSKotlinArray<SSSKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface SSSKotlinKTypeProjectionCompanion : SSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSSKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));
- (SSSKotlinKTypeProjection *)contravariantType:(id<SSSKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));
- (SSSKotlinKTypeProjection *)covariantType:(id<SSSKotlinKType>)type __attribute__((swift_name("covariant(type:)")));
- (SSSKotlinKTypeProjection *)invariantType:(id<SSSKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) SSSKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
