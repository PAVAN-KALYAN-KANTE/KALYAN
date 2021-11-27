import NewMeetup from "./pages/NewMeetup";
import Favourites from "./pages/Favourites";
import AllMeetups from "./pages/AllMeetups";
import { Route, Routes } from "react-router-dom";
import Layout from "./components/layouts/Layout";
function App() {
  return (
    <Layout>
      <Routes>
        <Route path="/" element={<NewMeetup />} />
        <Route path="/favor" element={<Favourites />} />
        <Route path="/Allmeets" element={<AllMeetups />} />
      </Routes>
    </Layout>
  );
}

export default App;
