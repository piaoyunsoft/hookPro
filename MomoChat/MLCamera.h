//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureAudioDataOutput, AVCaptureConnection, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureMetadataOutput, AVCaptureSession, AVCaptureVideoDataOutput;

@interface MLCamera : NSObject
{
    AVCaptureDevice *_currentCameraDevice;
    AVCaptureSession *_captureSession;
    AVCaptureVideoDataOutput *_videoDataOutput;
    AVCaptureAudioDataOutput *_audioDataOutput;
    long long _videoCaptureDeviceFrameRate;
    AVCaptureDeviceInput *_currentVideoDeviceInput;
    AVCaptureMetadataOutput *_metadataOutput;
    AVCaptureDeviceInput *_audioInput;
}

@property(nonatomic) __weak AVCaptureDeviceInput *audioInput; // @synthesize audioInput=_audioInput;
@property(retain, nonatomic) AVCaptureMetadataOutput *metadataOutput; // @synthesize metadataOutput=_metadataOutput;
@property(retain, nonatomic) AVCaptureDeviceInput *currentVideoDeviceInput; // @synthesize currentVideoDeviceInput=_currentVideoDeviceInput;
@property(nonatomic) long long videoCaptureDeviceFrameRate; // @synthesize videoCaptureDeviceFrameRate=_videoCaptureDeviceFrameRate;
@property(retain, nonatomic) AVCaptureAudioDataOutput *audioDataOutput; // @synthesize audioDataOutput=_audioDataOutput;
@property(retain, nonatomic) AVCaptureVideoDataOutput *videoDataOutput; // @synthesize videoDataOutput=_videoDataOutput;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(retain, nonatomic) AVCaptureDevice *currentCameraDevice; // @synthesize currentCameraDevice=_currentCameraDevice;
- (void).cxx_destruct;
- (void)updateCameraDeviceFrameDuration;
- (void)usesVideoCaptureDeviceInPosition:(long long)arg1;
- (void)rotateCamera;
@property(readonly, nonatomic) AVCaptureConnection *videoCaptureConnection;
- (void)stopRunningCaptureSession;
- (void)startRunningCaptureSession;
- (void)disableMetadataOutput;
- (void)disableAudioDataOutput;
- (void)enableMetadataOutputWithDelegate:(id)arg1 queue:(id)arg2 forMetadataObjectTypes:(id)arg3;
- (void)enableAudioDataOutputWithDelegate:(id)arg1 queue:(id)arg2;
- (void)enableVideoDataOutputWithDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithSessionPreset:(id)arg1 cameraPosition:(long long)arg2;
- (void)captureSessionDidStopRunning:(id)arg1;
- (void)captureSessionDidStartRunning:(id)arg1;
- (void)dealloc;

@end

