﻿/*============================================================================== 
 * Copyright (c) 2012-2015 Qualcomm Connected Experiences, Inc. All Rights Reserved. 
 * ==============================================================================*/
using UnityEngine;
using System.Collections;
using Vuforia;


/// <summary>
/// Specialized tap handler class for video playback.
/// </summary>
public class VideoPlaybackTapHandler : TapHandler
{
    #region PRIVATE_MEMBERS
    private PlayVideo mPlayVideo = null;
    #endregion //PRIVATE_MEMBERS


    #region PROTECTED_METHODS
    protected override void OnSingleTapConfirmed()
    {
		Debug.Log("VideoPlaybackTapHandler:OnSingleTapConfirmed:0");		

        base.OnSingleTapConfirmed();

		Debug.Log("VideoPlaybackTapHandler:OnSingleTapConfirmed:1");		

        if (mPlayVideo == null)
        {
			Debug.Log("VideoPlaybackTapHandler:OnSingleTapConfirmed:2");		

			mPlayVideo = FindObjectOfType<PlayVideo>();
        }

//		if (mPlayVideo == null) 
//		{
//			mPlayVideo = GetVideo();
//		}


        if (mPlayVideo)
        {
			Debug.Log("VideoPlaybackTapHandler:OnSingleTapConfirmed:3");		

			mPlayVideo.TryPickingVideo();
        }
    }

    /// <summary>
    /// Overriding base class implementation for double tap handling
    /// </summary>
    protected override void OnDoubleTap()
    {
        base.OnDoubleTap();

        // Get currently playing video, if any,
        // and pause it before the UI menu is opened.
        // This is needed in Unity 5 in order to show the UI menu
        VideoPlaybackBehaviour video = GetPlayingVideo();
        if (video != null && video.VideoPlayer.IsPlayableOnTexture()) {
            video.VideoPlayer.Pause();
        }
    }
    #endregion //PROTECTED_METHODS


    #region PRIVATE_METHODS
    /// <summary>
    /// Returns the currently active (playing) video, if any
    /// </summary>
    private VideoPlaybackBehaviour GetPlayingVideo()
    {
        VideoPlaybackBehaviour[] videos = (VideoPlaybackBehaviour[])
                FindObjectsOfType(typeof(VideoPlaybackBehaviour));
        
        foreach (VideoPlaybackBehaviour video in videos)
        {
            if (video.CurrentState == VideoPlayerHelper.MediaState.PLAYING)
            {
                return video;
            }
        }
        return null;
    }


	private VideoPlaybackBehaviour GetVideo()
	{
		VideoPlaybackBehaviour[] videos = (VideoPlaybackBehaviour[])
			FindObjectsOfType(typeof(VideoPlaybackBehaviour));

		foreach (VideoPlaybackBehaviour video in videos)
		{
			return video;
		}
		return null;
	}


	#endregion //PRIVATE_METHODS
}
