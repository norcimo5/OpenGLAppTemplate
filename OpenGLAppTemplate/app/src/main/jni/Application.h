/*
 * Application.h
 *
 *  Created on: Feb 13, 2015
 *      Author: Alexander
 */

#ifndef APPLICATION_H_
#define APPLICATION_H_

#include "RendererES2.h"

class Application
{
public:
	Application();
	virtual ~Application();

	static Application& Get();

	void Step();

	void OnPause();
	void OnResume();

	void OnUpdate( const float fDeltaSeconds );
	void OnDraw();

	void OnContextCreated();
	void OnWindowResize( int iWidth, int iHeight );

	void OnTouch( int iPointerID, float fPosX, float fPosY, int iAction );

private:
	static Application* s_pApplication;

	RendererES2* 	m_pRenderer;

	bool 			m_bPaused;
	uint32_t  m_iMyColor;
	uint64_t	m_Time;
};

#endif /* APPLICATION_H_ */
