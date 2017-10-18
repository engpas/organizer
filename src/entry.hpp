#ifndef ENTRY_HPP_INCLUDED
#define ENTRY_HPP_INCLUDED
#include "timepoint.hpp"
#include <ctime>
#include <chrono>
#include <string>
#include <vector>

//typedefs
typedef std::string Category;
typedef std::string Keyword;
typedef std::string Path;
typedef std::string Text;

class Entry
{
private:
	Timepoint dateLastUpdate_; //Time this entry was last changed
	Category category_; //Category this entry belongs to
	std::vector<Keyword> keywords_; //keywords describing this entry
	std::vector<Path> referencePaths_; //files that are referenced in this entry
	Text entryTitle_;
	Text entryText_;

public:
	//constructors
	Entry(const Entry& e): dateLastUpdate_(e.dateLastUpdate_), category_(e.category_), keywords_(e.keywords_), referencePaths_(e.referencePaths_), entryTitle_(e.entryTitle_), entryText_(e.entryText_) {}
	Entry() {}
	Entry(Text title, Text text, Category category): entryTitle_(title), entryText_(text), category_(category), dateLastUpdate_() {}

	//getters
	Timepoint getDateLastUpdate();
	Category getCategory();
	std::vector<Keyword> getKeywords();
	std::vector<Path> getReferencePaths();
	Text getEntryTitle();
	Text getEntryText();

	//setters
	void setDateLastUpdate(Timepoint); //set the date to the supplied value
	void setCategory(Category); //set the category to the supplied value
	void setKeywords(std::vector<Keyword>); //set the keywords to the supplied value
	void addKeyword(Keyword); //add the supplied keyword to the vector of keywords
	void removeKeyword(Keyword); //remove the supplied keyword if it exists (true if yes, false else)
	void removeKeyword(unsigned); //remove keyword with supplied index (true if yes, false else)
	void setReferencePaths(std::vector<Path>); //set the reference paths to the supplied value
	void addReferencePath(Path); //add the supplied path to the reference paths vector
	void removeReferencePath(Path); //remove the supplied reference path if it exists (true if yes, false else)
	void removeReferencePath(unsigned); //remove reference path with supplied index (true if yes, false else)
	void setEntryTitle(Text t);
	void setEntryText(Text t);
};
#endif
