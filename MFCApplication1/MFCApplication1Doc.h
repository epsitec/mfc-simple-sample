
// MFCApplication1Doc.h : interface de la classe CMFCApplication1Doc
//


#pragma once


class CMFCApplication1Doc : public CDocument
{
protected: // cr�ation � partir de la s�rialisation uniquement
	CMFCApplication1Doc();
	DECLARE_DYNCREATE(CMFCApplication1Doc)

// Attributs
public:

// Op�rations
public:

// Substitutions
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// Impl�mentation
public:
	virtual ~CMFCApplication1Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Fonctions g�n�r�es de la table des messages
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// Fonction d'assistance qui d�finit le contenu de recherche pour un gestionnaire de recherche
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
