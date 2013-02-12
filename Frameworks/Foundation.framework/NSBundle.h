/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSBundle : NSObject {
    id _cfBundle;
    unsigned int _flags;
    Class _principalClass;
    void *_reserved0;
    void *_reserved1;
    unsigned int _reserved2;
    id _tmp1;
    id _tmp2;
}

+ (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 inBundleWithURL:(id)arg4;
+ (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 inBundleWithURL:(id)arg3;
+ (id)__geoBundle;
+ (id)__vkBundle;
+ (id)_brailleTableBundles;
+ (id)_brailleTableBundles;
+ (id)_brailleTableDictionaryForBrailleTableIdentifier:(id)arg1;
+ (id)_brailleTableDictionaryForBrailleTableIdentifier:(id)arg1;
+ (id)_mapkitBundle;
+ (id)_rivenBundle;
+ (id)_rivenFactory;
+ (id)_textInputFactory;
+ (id)_typologyBundle;
+ (id)accessibilityBundleWithLastPathComponent:(id)arg1;
+ (id)afui_assistantUIFrameworkBundle;
+ (id)allBundles;
+ (id)allFrameworks;
+ (id)brailleDriverBundleWithIdentifier:(id)arg1;
+ (id)brailleDriverBundleWithIdentifier:(id)arg1;
+ (id)brailleDriverBundles;
+ (id)brailleDriverBundles;
+ (id)brailleDriverDeviceDetectionInfo;
+ (id)brailleDriverDeviceDetectionInfo;
+ (id)brailleTableBundleWithTableIdentifier:(id)arg1;
+ (id)brailleTableBundleWithTableIdentifier:(id)arg1;
+ (id)brailleTableIdentifiers;
+ (id)brailleTableIdentifiers;
+ (id)bundleForBinaryImagePath:(id)arg1;
+ (id)bundleForClass:(Class)arg1;
+ (long)bundleIndexForBrailleDriverIdentifier:(id)arg1;
+ (long)bundleIndexForBrailleDriverIdentifier:(id)arg1;
+ (id)bundleWithIdentifier:(id)arg1;
+ (id)bundleWithPath:(id)arg1;
+ (id)bundleWithURL:(id)arg1;
+ (id)currentNibLoadingBundle;
+ (id)currentNibPath;
+ (id)debugDescription;
+ (BOOL)doesBrailleTableSupportContractions:(id)arg1;
+ (BOOL)doesBrailleTableSupportContractions:(id)arg1;
+ (BOOL)doesBrailleTableSupportEightDot:(id)arg1;
+ (BOOL)doesBrailleTableSupportEightDot:(id)arg1;
+ (id)findBundleResourceURLs:(id)arg1 callingMethod:(SEL)arg2 bundleURL:(id)arg3 languages:(id)arg4 name:(id)arg5 types:(id)arg6 limit:(unsigned int)arg7;
+ (id)findBundleResourceURLsCallingMethod:(SEL)arg1 baseURL:(id)arg2 passingTest:(id)arg3;
+ (id)findBundleResources:(id)arg1 callingMethod:(SEL)arg2 directory:(id)arg3 languages:(id)arg4 name:(id)arg5 types:(id)arg6 limit:(unsigned int)arg7;
+ (id)frameworkBundleForBinaryImagePath:(id)arg1;
+ (id)iPodUIBundle;
+ (id)languageIdentifiersForBrailleTableIdentifier:(id)arg1;
+ (id)languageIdentifiersForBrailleTableIdentifier:(id)arg1;
+ (id)loadedBundles;
+ (id)mainBundle;
+ (id)mediaPlayerBundle;
+ (id)nameForBrailleTableIdentifier:(id)arg1;
+ (id)nameForBrailleTableIdentifier:(id)arg1;
+ (id)pathForITunesResource:(id)arg1 ofType:(id)arg2;
+ (id)pathForITunesStoreResource:(id)arg1 ofType:(id)arg2;
+ (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
+ (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2;
+ (void)popNibLoadingBundle;
+ (void)popNibPath;
+ (id)preferredLocalizationsFromArray:(id)arg1 forPreferences:(id)arg2;
+ (id)preferredLocalizationsFromArray:(id)arg1;
+ (void)pushNibLoadingBundle:(id)arg1;
+ (void)pushNibPath:(id)arg1;
+ (void)setSystemLanguages:(id)arg1;
+ (id)tableIdentifiersForLanguageIdentifier:(id)arg1;
+ (id)tableIdentifiersForLanguageIdentifier:(id)arg1;

- (id)URLForAuxiliaryExecutable:(id)arg1;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 localization:(id)arg4;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2;
- (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 localization:(id)arg3;
- (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2;
- (id)XPCServiceBundles;
- (void)_accessibilityInitializeContainerLogic;
- (id)_cachedMainBundleResourcePath;
- (struct __CFBundle { }*)_cfBundle;
- (id)_compatibility_bundleURL;
- (id)_compatility_bundlePath;
- (id)_computeExecutablePath;
- (id)_gkBundleVersion;
- (id)_gkLocalizedName;
- (id)_gkLocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 language:(id)arg4;
- (id)_gkPathForChallengeSound;
- (id)_gkPathForInviteSound;
- (id)_gkPathForSoundWithName:(id)arg1;
- (void)_initInfoDictionary;
- (id)_pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forRegion:(id)arg4;
- (id)_pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forRegion:(id)arg3;
- (id)_regionsArray;
- (id)accessibilityBundlePath;
- (id)appStoreReceiptURL;
- (id)assistantUILocalizedStringForKey:(id)arg1 table:(id)arg2;
- (id)builtInPlugInsPath;
- (id)builtInPlugInsURL;
- (id)bundleIdentifier;
- (id)bundleLanguages;
- (id)bundlePath;
- (id)bundleSpecificTableIdentifierForTableIdentifier:(id)arg1;
- (id)bundleSpecificTableIdentifierForTableIdentifier:(id)arg1;
- (id)bundleURL;
- (Class)classNamed:(id)arg1;
- (void)dealloc;
- (id)defaultsDictionary;
- (id)description;
- (id)developmentLocalization;
- (id)executableArchitectures;
- (id)executablePath;
- (id)executableURL;
- (void)finalize;
- (id)findBundleResourceURLsCallingMethod:(SEL)arg1 passingTest:(id)arg2;
- (id)infoDictionary;
- (id)initWithPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)invalidateResourceCache;
- (BOOL)isLoaded;
- (id)launchDPath;
- (BOOL)load;
- (BOOL)loadAndReturnError:(id*)arg1;
- (id)loadNibNamed:(id)arg1 owner:(id)arg2 options:(id)arg3;
- (id)localizations;
- (id)localizationsToSearch;
- (id)localizedInfoDictionary;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)newDataURLForResource:(id)arg1 ofType:(id)arg2 withMIMEType:(id)arg3;
- (id)objectForInfoDictionaryKey:(id)arg1;
- (id)pathForAuxiliaryExecutable:(id)arg1;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forLanguage:(id)arg4;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forLocalization:(id)arg4;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
- (id)pathForResource:(id)arg1 ofType:(id)arg2;
- (id)pathForResource:(id)arg1;
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forLanguage:(id)arg3;
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forLocalization:(id)arg3;
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2;
- (id)preferredLocalizations;
- (BOOL)preflightAndReturnError:(id*)arg1;
- (Class)principalClass;
- (id)privateFrameworksPath;
- (id)privateFrameworksURL;
- (oneway void)release;
- (id)resourcePath;
- (id)resourceURL;
- (id)sharedFrameworksPath;
- (id)sharedFrameworksURL;
- (id)sharedSupportPath;
- (id)sharedSupportURL;
- (id)tableIdentifierForBundleSpecificTableIdentifier:(id)arg1;
- (id)tableIdentifierForBundleSpecificTableIdentifier:(id)arg1;
- (BOOL)unload;
- (unsigned int)versionNumber;

@end
