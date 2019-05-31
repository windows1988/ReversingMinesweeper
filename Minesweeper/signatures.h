#pragma once
#include <Windows.h>

void DrawHUDRectangle(HDC hDC, RECT rect, DWORD lines_width, BYTE white_or_copypen);
int CountNearBombs(int column, int row);
void FinishGame(BOOL isWon);
void ShowAboutWindow();
BOOL FindHtmlHelpDLL(PSTR outputLibraryName);
void DisplayHelpWindow(HWND hDesktopWnd, LPCSTR lpChmFilename, UINT uCommand, DWORD_PTR dwData);
void ShowHelpHtml(DWORD arg0, UINT uCommand);
int GetDlgIntOfRange(HWND hDlg, int nIDDlgItem, int min, int max);
void RevealAllBombs(BYTE revealedBombsState);
void DisplayAllBlocks();
void DisplayAllBlocksInDC(HDC hDC);
void SaveWinnerNameDialogBox();
INT_PTR WINAPI SaveWinnerNameDialogProc(HWND hDialog, UINT uMsg, DWORD wParam, DWORD lParam);
BOOL WinnersDialogProc(HWND hDlg, UINT uMsg, WPARAM wParam, LPARAM lParam);
void ShowWinnerNameAndTime(HWND hDlg, int nIDDlgItem, int secondsLeft, LPCWSTR lpName);
void WinnersDialogBox();
void GetNumberOfFlags(int column, int row);
void DisplayTimerSeconds();
void DisplayTimerSecondsOnDC(HDC hDC);
void PlayGameSound(DWORD soundType);
void LongFunc(int column, int row);
void UpdateBlockStateToClicked(DWORD column, DWORD row);
void UpdateBlockStateToUnclicked(DWORD column, DWORD row);
void DrawBlock(int column, int row);
BOOL HandleLeftClick(DWORD dwLocation);
void DisplaySmile(DWORD smileId);
void DisplaySmileOnDC(HDC hDC, DWORD smileId);
void InitializeMenu(DWORD menuFlags);
void InitializeCheckedMenuItems();
void SetMenuItemState(DWORD uID, BOOL isChecked);
void SaveConfigToRegistry();
void SetStringInRegistry(RegistryValue regValue, LPCWSTR lpStringValue);
void SetIntegerInRegistry(RegistryValue regValue, DWORD value);
void FreePenAndBlocksAndSound();
void FreePenAndBlocks();
void FreeSound();


