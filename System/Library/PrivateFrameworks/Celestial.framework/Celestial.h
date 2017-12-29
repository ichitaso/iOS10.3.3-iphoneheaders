#import <Celestial/BWAudioFileSinkNode.h>
#import <Celestial/BWFaceDetectionNode.h>
#import <Celestial/BWBracketSettings.h>
#import <Celestial/FigCaptureStillImageSettings.h>
#import <Celestial/FigCaptureIrisStillImageSettings.h>
#import <Celestial/FigCaptureIrisPreparedSettings.h>
#import <Celestial/BWFigCaptureSessionExternal.h>
#import <Celestial/BWParallelSplitterNode.h>
#import <Celestial/BWStillImageScalerNode.h>
#import <Celestial/BWNodeInput.h>
#import <Celestial/AVItem.h>
#import <Celestial/AVQueue.h>
#import <Celestial/AVQueueFeeder.h>
#import <Celestial/AVArrayQueueFeeder.h>
#import <Celestial/AVTimeMarkerObservation.h>
#import <Celestial/AVFromMainThreadPostNotificationNameDict.h>
#import <Celestial/AVFromNotifySafeThreadPostNotificationNameDict.h>
#import <Celestial/AVSafePostDelayedNotificationFromMainThreadTargetDict.h>
#import <Celestial/AVSafePerformOnMainThreadTargetDict.h>
#import <Celestial/AVValue.h>
#import <Celestial/AVObjectRegistry.h>
#import <Celestial/BWFigCaptureDeviceClient.h>
#import <Celestial/BWFigCaptureDeviceVendor.h>
#import <Celestial/AVCallbackHandler.h>
#import <Celestial/AVFileValidator.h>
#import <Celestial/BWIrisMovieInfo.h>
#import <Celestial/AVFileProcessor.h>
#import <Celestial/BWStillImageTurnstileNode.h>
#import <Celestial/BWCrossoverNode.h>
#import <Celestial/BWAudioFormat.h>
#import <Celestial/BWNodeOutput.h>
#import <Celestial/BWMonochromeEffectNode.h>
#import <Celestial/BWHDRNode.h>
#import <Celestial/BWFigExternalVideoCaptureDevice.h>
#import <Celestial/AVRecorder.h>
#import <Celestial/BWFigCaptureSession.h>
#import <Celestial/AVController.h>
#import <Celestial/AVControllerFig.h>
#import <Celestial/AVControllerRemoteFig.h>
#import <Celestial/AVControllerRemoteFigStream.h>
#import <Celestial/AVSystemController.h>
#import <Celestial/AVPlaybackItem.h>
#import <Celestial/BWAudioSourceNode.h>
#import <Celestial/BWPixelTransferNode.h>
#import <Celestial/AVPlaybackQueue.h>
#import <Celestial/BWRingBuffer.h>
#import <Celestial/BWMotionSampleRingBuffer.h>
#import <Celestial/BWDeviceMotionActivityDetector.h>
#import <Celestial/BWMetadataSourceNode.h>
#import <Celestial/BWFigVideoCaptureStream.h>
#import <Celestial/BWParallelJoinerNode.h>
#import <Celestial/AVRecorderAudioQueueImpl.h>
#import <Celestial/BWSinkNode.h>
#import <Celestial/FigCaptureSessionConfiguration.h>
#import <Celestial/FigCaptureConnectionConfiguration.h>
#import <Celestial/FigVideoCaptureConnectionConfiguration.h>
#import <Celestial/FigAudioCaptureConnectionConfiguration.h>
#import <Celestial/FigMetadataObjectCaptureConnectionConfiguration.h>
#import <Celestial/FigMetadataItemCaptureConnectionConfiguration.h>
#import <Celestial/FigCaptureSourceConfiguration.h>
#import <Celestial/FigCaptureSinkConfiguration.h>
#import <Celestial/BWStillImageCoordinatorNode.h>
#import <Celestial/BWFileCoordinatorNode.h>
#import <Celestial/FigCaptureThermalMonitor.h>
#import <Celestial/BWFigCaptureDeviceSourceNode.h>
#import <Celestial/BWIrisDiscontinuity.h>
#import <Celestial/BWIrisSequenceAdjuster.h>
#import <Celestial/FigStateMachine.h>
#import <Celestial/BWSISNode.h>
#import <Celestial/BWCoreMotionMetadataSourceNode.h>
#import <Celestial/FigCaptureExternalEAControlPipe.h>
#import <Celestial/BWStillImageTimeMachine.h>
#import <Celestial/BWIrisStagingNode.h>
#import <Celestial/BWPixelBufferPool.h>
#import <Celestial/BWNoiseReducerNode.h>
#import <Celestial/BWZoomCommandHandler.h>
#import <Celestial/BWZoomDelayBuffer.h>
#import <Celestial/BWCameraInfoMetadataNode.h>
#import <Celestial/FigCameraViewfinder.h>
#import <Celestial/FigCameraViewfinderSession.h>
#import <Celestial/FigCaptureRecordingSettings.h>
#import <Celestial/FigCaptureMovieFileRecordingSettings.h>
#import <Celestial/FigCaptureAudioFileRecordingSettings.h>
#import <Celestial/BWImageQueueSinkNode.h>
#import <Celestial/BWFormatRequirements.h>
#import <Celestial/BWFormat.h>
#import <Celestial/BWAudioConverterNode.h>
#import <Celestial/BWNodeEnumerator.h>
#import <Celestial/BWDepthFirstEnumerator.h>
#import <Celestial/BWReverseDepthFirstEnumerator.h>
#import <Celestial/BWBreadthFirstEnumerator.h>
#import <Celestial/BWReverseBreadthFirstEnumerator.h>
#import <Celestial/BWMotionDataPreserver.h>
#import <Celestial/FigRecorderProxy.h>
#import <Celestial/BWMRCNode.h>
#import <Celestial/FigCaptureSourceExternalObserver.h>
#import <Celestial/BWFrameRateGovernorNode.h>
#import <Celestial/FigIrisAutoTrimmerMotionSample.h>
#import <Celestial/FigIrisAutoTrimmer.h>
#import <Celestial/BWMotionAttachmentsNode.h>
#import <Celestial/FigAccelerometerDelegate.h>
#import <Celestial/BWMultiStreamCameraSourceNode.h>
#import <Celestial/BWAggdDataReporter.h>
#import <Celestial/FigCoreMotionDelegate.h>
#import <Celestial/BWRemoteQueueSinkNode.h>
#import <Celestial/BWDroppedSample.h>
#import <Celestial/FigCameraViewfinderLocal.h>
#import <Celestial/FigCameraViewfinderSessionLocal.h>
#import <Celestial/BWMetadataObjectFormat.h>
#import <Celestial/BWIrisMovieInfoAndCallback.h>
#import <Celestial/BWIrisMovieGenerator.h>
#import <Celestial/FigCaptureSourceFESCompanionFormat.h>
#import <Celestial/FigCaptureSourceFormat.h>
#import <Celestial/BWNodeConnection.h>
#import <Celestial/FigBWNodeRenderObserver.h>
#import <Celestial/FigIOSurfaceData.h>
#import <Celestial/BWFanOutNode.h>
#import <Celestial/BWVideoOrientationMetadataNode.h>
#import <Celestial/BWSourceNode.h>
#import <Celestial/BWDeferredMetadataCache.h>
#import <Celestial/BWDetectedFacesRingBuffer.h>
#import <Celestial/BWStillImageCaptureSettings.h>
#import <Celestial/BWStillImageCaptureStreamSettings.h>
#import <Celestial/BWFileSinkNode.h>
#import <Celestial/FigCameraUsageListener.h>
#import <Celestial/FigCaptureClientSessionMonitor.h>
#import <Celestial/FigCaptureDisplayLayoutMonitor.h>
#import <Celestial/AVItemAccessLogInternal.h>
#import <Celestial/AVItemAccessLog.h>
#import <Celestial/AVItemAccessLogEventInternal.h>
#import <Celestial/AVItemAccessLogEvent.h>
#import <Celestial/AVItemErrorLogInternal.h>
#import <Celestial/AVItemErrorLog.h>
#import <Celestial/AVItemErrorLogEventInternal.h>
#import <Celestial/AVItemErrorLogEvent.h>
#import <Celestial/FigCapturePixelConverter.h>
#import <Celestial/FigCaptureSessionObservatory.h>
#import <Celestial/FigCaptureSessionProxy.h>
#import <Celestial/BWExternalCameraSourceNode.h>
#import <Celestial/BWRamp.h>
#import <Celestial/BWNode.h>
#import <Celestial/BWVideoFormatRequirements.h>
#import <Celestial/BWVideoFormat.h>
#import <Celestial/BWPipelineStage.h>
#import <Celestial/BWSampleBufferSinkNode.h>
#import <Celestial/FigCaptureAutoFocusPositionSensorCalibrationMonitor.h>
#import <Celestial/BWGNRNode.h>
#import <Celestial/BWStereoFusionNode.h>
#import <Celestial/BWPhotoEncoderNode.h>
#import <Celestial/BWVideoSDOFNode.h>
#import <Celestial/FigNSXPCConnection.h>
#import <Celestial/FigCameraViewfinderRemote.h>
#import <Celestial/FigCameraViewfinderSessionRemote.h>
#import <Celestial/FigWeakReference.h>
#import <Celestial/FigDelegateStorage.h>
#import <Celestial/BWGraph.h>
#import <Celestial/BWMockVideoSDOFNode.h>
#import <Celestial/FigCameraViewfinderStream.h>
#import <Celestial/BWNodeMessage.h>
#import <Celestial/BWNodeSampleBufferMessage.h>
#import <Celestial/BWNodeConfigurationLiveMessage.h>
#import <Celestial/BWNodeEndOfDataMessage.h>
#import <Celestial/BWNodeErrorMessage.h>
#import <Celestial/BWNodeDroppedSampleMessage.h>
#import <Celestial/BWNodeIrisReferenceMovieRequestMessage.h>
#import <Celestial/BWNodeStillImageReferenceFrameBracketedCaptureSequenceNumberMessage.h>
#import <Celestial/BWQuickTimeMovieFileSinkNode.h>
#import <Celestial/FigCameraViewfinderServer.h>
#import <Celestial/BWFigVideoCaptureDevice.h>
#import <Celestial/BWSynchronizerNode.h>
#import <Celestial/BWMetadataFormat.h>
#import <Celestial/BWVideoSDOFSplitNode.h>
#import <Celestial/BWVideoCompressorNode.h>
#import <Celestial/BWCaptureDevice.h>
#import <Celestial/BWNodeError.h>
#import <Celestial/BWVISNode.h>
#import <Celestial/BWFunnelNode.h>
