import { Route, Routes } from "react-router-dom";
import NewMeetups from "./componens/pages/NewMeetups";
import Favourites from "./componens/pages/Favourites";
import AllMeetups from "./componens/pages/Allmeetups";
import Navigation from "./componens/layouts/Navigation";
function App() {
  return (
    <div>
      <Navigation />
      <Routes>
        <Route path="/" element={<AllMeetups />} />
        <Route path="/Favor" element={<Favourites />} />
        <Route path="/AllMeets" element={<NewMeetups />} />
      </Routes>
    </div>
  );
}

export default App;
